#pragma once

#include <Dialog.h>
#include <StatusBar.h>

class AppDialog : public Dialog
{
public:
    AppDialog();

protected:
    bool OnCreated() override;
    void OnSize() override;

private:
    bool CreateStatus();

private:
    StatusBar sbar;
    Font font;
};