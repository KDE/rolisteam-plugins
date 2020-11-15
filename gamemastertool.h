#ifndef GAMEMASTERTOOL_H
#define GAMEMASTERTOOL_H

class GameMasterTool
{
public:
    explicit GameMasterTool();
    virtual ~GameMasterTool()= default;

    virtual void readSettings();
    virtual void writeSettings();
};

#endif // GAMEMASTERTOOL_H
