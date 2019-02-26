#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "game.h"
#include "unit.h"

//======================================================
typedef struct _timedata_
    {
        unsigned int sec;
        unsigned int min;
        unsigned int hour;
    } TimeData;

//======================================================
class GameTimeCounter
{
private:
    TimeData GameTime;

public:
    GameTimeCounter();
    ~GameTimeCounter();

    TimeData getGameTime();
    bool	CountUp();
    bool	CountDown();
    bool	ResetCount();
};

//=======================================================


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:

    Fild gameFild;
    Game *GameController;
    MoveDirection mvf;
    GameTimeCounter GTC;

    qint32 timerSource;
    qint32 TimeBase;
    qint32 LevelTimeStep;
    qint32 GamePause;
    qint32 delay_cnt;

    GameStatus PST;


    Ui::MainWindow *ui;
void    keyPressEvent (QKeyEvent* pe);
};

//==============================================================

#endif // MAINWINDOW_H








/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
*/


/*

#include <gtkmm.h>
#include <gtkmm/drawingarea.h>
#include <cairomm/context.h>


//-----------------------------






//==================================================
class MyArea:public Gtk::DrawingArea
{
public:
    Fild pole;
    PointArr unit_snake,unit_rabbit;
    GameStatus PST;
    int Score;
    int Level;
    TimeData btmr;

    MyArea();
    ~MyArea();

protected:

    guint X_max,Y_max;


    bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr);
};



//====================================================
class MainWindow: public Gtk::Window
{
public:
    MainWindow();
    virtual ~MainWindow();



protected:
    Fild gameFild;
    Game *GameController;
    MoveDirection mvf;
    GameTimeCounter GTC;

    sigc::connection timerSource;
    guint TimeBase;
    guint LevelTimeStep;
    guint GamePause;
    guint delay_cnt;

    GameStatus PST;

    MyArea area;

    bool Tic();
    bool Main_Loop();
    bool on_key_press_event(GdkEventKey* key_event);
    void OnQuit();
    void _PreRender();
};



 */
