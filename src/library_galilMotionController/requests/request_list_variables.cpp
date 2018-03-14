#include "request_list_variables.h"

RequestListVariables::RequestListVariables():
    AbstractRequest(RequestTypes::LIST_VARIABLES,500)
{

}

RequestListVariables::RequestListVariables(const RequestListVariables &copy):
    AbstractRequest(copy)
{
}

AbstractRequest* RequestListVariables::getClone() const
{
    return (new RequestListVariables(*this));
}

void RequestListVariables::getClone(AbstractRequest** state) const
{
    *state = new RequestListVariables(*this);
}

std::string RequestListVariables::getRequestString() const
{
    std::string str = "";
    str += RequestToString(this->getRequestType());
    return str;
}

std::vector<AbstractStatusPtr> RequestListVariables::getStatus() const
{
    std::vector<AbstractStatusPtr> rtn;
    Status_VariableListPtr variableList = std::make_shared<Status_VariableList>();

    //as the galil only currently reports a single axis here, we will make the parse easy for now
    QString result = QString::fromStdString(buffer);
    QStringList list = result.split(QRegExp("[\r\n]"),QString::SkipEmptyParts);
    for(int i = 0; i < list.size(); i++)
    {
        QStringList line = list.at(i).split(QRegExp("="),QString::SkipEmptyParts);
        if(line.size() == 2)
        {
            QString varName = line.at(0).trimmed();
            QString varValue = line.at(1).trimmed();
            variableList->addVariable(Status_VariableValue(varName.toStdString(),varValue.toDouble()));
        }
    }
    rtn.push_back(variableList);
    return rtn;
}
