/*
 * Copyight 2017 Akshay Agarwal, agarwal.akshay.akshay8@gmail.com
 * All rights reserved. Distributed under the terms of the MIT License.
 */
#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H


#include <MenuBar.h>
#include <MenuItem.h>
#include <private/shared/CalendarView.h>
#include <private/shared/ToolBar.h>
#include <DateTime.h>
#include <View.h>
#include <Window.h>

using BPrivate::BCalendarView;

class MainWindow: public BWindow
{
public:
			MainWindow();
	virtual void	MessageReceived(BMessage* message);
	virtual bool	QuitRequested();

private:
	static const int kMenuAppQuit	= 1000;
	static const int kShowToday 	= 1001;
	static const int kDayView 	= 1002;
	static const int kMonthView	= 1003;
	static const int kAddEvent	= 1004;
	
	BView*		fMainView;
	BView*		fSidePanelView;
	BMenuBar*	fMenuBar;
	BMenu*		fAppMenu;
	BToolBar*	fToolBar;
	BCalendarView*	fCalendarView;
};

#endif
