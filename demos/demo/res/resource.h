//stamp:2bc801d44112603c
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				xml_init = _T("UIDEF:xml_init");
			}
			const TCHAR * xml_init;
		}UIDEF;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
				ICON_MM_ONLINE = _T("ICON:ICON_MM_ONLINE");
				ICON_MM_OFFLINE = _T("ICON:ICON_MM_OFFLINE");
				ICON_Loading1 = _T("ICON:ICON_Loading1");
				ICON_Loading2 = _T("ICON:ICON_Loading2");
				ICON_Loading3 = _T("ICON:ICON_Loading3");
				ICON_Loading4 = _T("ICON:ICON_Loading4");
				ICON_Loading5 = _T("ICON:ICON_Loading5");
				ICON_Loading6 = _T("ICON:ICON_Loading6");
			}
			const TCHAR * ICON_LOGO;
			const TCHAR * ICON_MM_ONLINE;
			const TCHAR * ICON_MM_OFFLINE;
			const TCHAR * ICON_Loading1;
			const TCHAR * ICON_Loading2;
			const TCHAR * ICON_Loading3;
			const TCHAR * ICON_Loading4;
			const TCHAR * ICON_Loading5;
			const TCHAR * ICON_Loading6;
		}ICON;
		class _CURSOR{
			public:
			_CURSOR(){
				ANI_ARROW = _T("CURSOR:ANI_ARROW");
				CUR_TST = _T("CURSOR:CUR_TST");
			}
			const TCHAR * ANI_ARROW;
			const TCHAR * CUR_TST;
		}CURSOR;
		class _SMENU{
			public:
			_SMENU(){
				menu_test = _T("SMENU:menu_test");
				menu_lv = _T("SMENU:menu_lv");
			}
			const TCHAR * menu_test;
			const TCHAR * menu_lv;
		}SMENU;
		class _SMENUEX{
			public:
			_SMENUEX(){
				menu_tray = _T("SMENUEX:menu_tray");
			}
			const TCHAR * menu_tray;
		}SMENUEX;
		class _LAYOUT{
			public:
			_LAYOUT(){
				page_ctrls = _T("LAYOUT:page_ctrls");
				maindlg = _T("LAYOUT:maindlg");
				page_layout = _T("LAYOUT:page_layout");
				page_skia = _T("LAYOUT:page_skia");
				page_misc = _T("LAYOUT:page_misc");
				page_webkit = _T("LAYOUT:page_webkit");
				page_about = _T("LAYOUT:page_about");
				page_animator = _T("LAYOUT:page_animator");
				treectrl = _T("LAYOUT:treectrl");
				page_script = _T("LAYOUT:page_script");
				dlg_formatmsg = _T("LAYOUT:dlg_formatmsg");
				template_calendar = _T("LAYOUT:template_calendar");
				dlg_skiatext = _T("LAYOUT:dlg_skiatext");
				page_treeview = _T("LAYOUT:page_treeview");
				dlg_clock = _T("LAYOUT:dlg_clock");
				dlg_set_skin = _T("LAYOUT:dlg_set_skin");
				dlg_tip = _T("LAYOUT:dlg_tip");
				dlg_wrap_content = _T("LAYOUT:dlg_wrap_content");
			}
			const TCHAR * page_ctrls;
			const TCHAR * maindlg;
			const TCHAR * page_layout;
			const TCHAR * page_skia;
			const TCHAR * page_misc;
			const TCHAR * page_webkit;
			const TCHAR * page_about;
			const TCHAR * page_animator;
			const TCHAR * treectrl;
			const TCHAR * page_script;
			const TCHAR * dlg_formatmsg;
			const TCHAR * template_calendar;
			const TCHAR * dlg_skiatext;
			const TCHAR * page_treeview;
			const TCHAR * dlg_clock;
			const TCHAR * dlg_set_skin;
			const TCHAR * dlg_tip;
			const TCHAR * dlg_wrap_content;
		}LAYOUT;
		class _IMGX{
			public:
			_IMGX(){
				img_busy = _T("IMGX:img_busy");
				btn_expand = _T("IMGX:btn_expand");
				jpg_bkgnd = _T("IMGX:jpg_bkgnd");
				png_small_icons = _T("IMGX:png_small_icons");
				webbtn_back = _T("IMGX:webbtn_back");
				webbtn_forward = _T("IMGX:webbtn_forward");
				webbtn_refresh = _T("IMGX:webbtn_refresh");
				png_treeicon = _T("IMGX:png_treeicon");
				png_menu_border = _T("IMGX:png_menu_border");
				png_vscroll = _T("IMGX:png_vscroll");
				png_hscroll = _T("IMGX:png_hscroll");
				png_tab_left = _T("IMGX:png_tab_left");
				png_tab_left_splitter = _T("IMGX:png_tab_left_splitter");
				png_tab_main = _T("IMGX:png_tab_main");
				btn_menu = _T("IMGX:btn_menu");
				png_propswitch = _T("IMGX:png_propswitch");
				png_animode = _T("IMGX:png_animode");
				png_chrome_tab_new = _T("IMGX:png_chrome_tab_new");
				png_chrome_tab_close = _T("IMGX:png_chrome_tab_close");
				png_lcex_header = _T("IMGX:png_lcex_header");
				png_lcex_header_arrow = _T("IMGX:png_lcex_header_arrow");
				png_lcex_selectrange = _T("IMGX:png_lcex_selectrange");
				png_icon1 = _T("IMGX:png_icon1");
				png_icon2 = _T("IMGX:png_icon2");
				png_icon3 = _T("IMGX:png_icon3");
				png_icon4 = _T("IMGX:png_icon4");
				png_icon5 = _T("IMGX:png_icon5");
				png_icon6 = _T("IMGX:png_icon6");
				png_icon7 = _T("IMGX:png_icon7");
				png_star1 = _T("IMGX:png_star1");
				png_install = _T("IMGX:png_install");
				png_mask = _T("IMGX:png_mask");
				png_avatar = _T("IMGX:png_avatar");
				png_img_bk = _T("IMGX:png_img_bk");
				png_btn_skin = _T("IMGX:png_btn_skin");
				tip_bg = _T("IMGX:tip_bg");
			}
			const TCHAR * img_busy;
			const TCHAR * btn_expand;
			const TCHAR * jpg_bkgnd;
			const TCHAR * png_small_icons;
			const TCHAR * webbtn_back;
			const TCHAR * webbtn_forward;
			const TCHAR * webbtn_refresh;
			const TCHAR * png_treeicon;
			const TCHAR * png_menu_border;
			const TCHAR * png_vscroll;
			const TCHAR * png_hscroll;
			const TCHAR * png_tab_left;
			const TCHAR * png_tab_left_splitter;
			const TCHAR * png_tab_main;
			const TCHAR * btn_menu;
			const TCHAR * png_propswitch;
			const TCHAR * png_animode;
			const TCHAR * png_chrome_tab_new;
			const TCHAR * png_chrome_tab_close;
			const TCHAR * png_lcex_header;
			const TCHAR * png_lcex_header_arrow;
			const TCHAR * png_lcex_selectrange;
			const TCHAR * png_icon1;
			const TCHAR * png_icon2;
			const TCHAR * png_icon3;
			const TCHAR * png_icon4;
			const TCHAR * png_icon5;
			const TCHAR * png_icon6;
			const TCHAR * png_icon7;
			const TCHAR * png_star1;
			const TCHAR * png_install;
			const TCHAR * png_mask;
			const TCHAR * png_avatar;
			const TCHAR * png_img_bk;
			const TCHAR * png_btn_skin;
			const TCHAR * tip_bg;
		}IMGX;
		class _img_calendar2{
			public:
			_img_calendar2(){
				png_skin_btn_semiarc = _T("img_calendar2:png_skin_btn_semiarc");
				png_skin_btn_curve = _T("img_calendar2:png_skin_btn_curve");
				png_line_1px = _T("img_calendar2:png_line_1px");
				png_radio_button = _T("img_calendar2:png_radio_button");
				cal_arrow_left = _T("img_calendar2:cal_arrow_left");
				cal_arrow_right = _T("img_calendar2:cal_arrow_right");
				cal_btn_day = _T("img_calendar2:cal_btn_day");
			}
			const TCHAR * png_skin_btn_semiarc;
			const TCHAR * png_skin_btn_curve;
			const TCHAR * png_line_1px;
			const TCHAR * png_radio_button;
			const TCHAR * cal_arrow_left;
			const TCHAR * cal_arrow_right;
			const TCHAR * cal_btn_day;
		}img_calendar2;
		class _img_dock{
			public:
			_img_dock(){
				PNG_MAINBK = _T("img_dock:PNG_MAINBK");
				PNG_ICON_1 = _T("img_dock:PNG_ICON_1");
				PNG_ICON_2 = _T("img_dock:PNG_ICON_2");
				PNG_ICON_3 = _T("img_dock:PNG_ICON_3");
				PNG_ICON_4 = _T("img_dock:PNG_ICON_4");
				PNG_ICON_5 = _T("img_dock:PNG_ICON_5");
				PNG_ICON_6 = _T("img_dock:PNG_ICON_6");
				PNG_ICON_7 = _T("img_dock:PNG_ICON_7");
				PNG_ICON_8 = _T("img_dock:PNG_ICON_8");
				PNG_ICON_9 = _T("img_dock:PNG_ICON_9");
				PNG_ICON_10 = _T("img_dock:PNG_ICON_10");
			}
			const TCHAR * PNG_MAINBK;
			const TCHAR * PNG_ICON_1;
			const TCHAR * PNG_ICON_2;
			const TCHAR * PNG_ICON_3;
			const TCHAR * PNG_ICON_4;
			const TCHAR * PNG_ICON_5;
			const TCHAR * PNG_ICON_6;
			const TCHAR * PNG_ICON_7;
			const TCHAR * PNG_ICON_8;
			const TCHAR * PNG_ICON_9;
			const TCHAR * PNG_ICON_10;
		}img_dock;
		class _img_game{
			public:
			_img_game(){
				img_coin = _T("img_game:img_coin");
				gif_win = _T("img_game:gif_win");
				gif_horse = _T("img_game:gif_horse");
			}
			const TCHAR * img_coin;
			const TCHAR * gif_win;
			const TCHAR * gif_horse;
		}img_game;
		class _img_clock{
			public:
			_img_clock(){
				background = _T("img_clock:background");
				pointer_hour = _T("img_clock:pointer_hour");
				pointer_minute = _T("img_clock:pointer_minute");
				pointer_second = _T("img_clock:pointer_second");
			}
			const TCHAR * background;
			const TCHAR * pointer_hour;
			const TCHAR * pointer_minute;
			const TCHAR * pointer_second;
		}img_clock;
		class _bkimg{
			public:
			_bkimg(){
				skin_pic_0 = _T("bkimg:skin_pic_0");
				skin_pic_1 = _T("bkimg:skin_pic_1");
				skin_pic_2 = _T("bkimg:skin_pic_2");
				skin_pic_3 = _T("bkimg:skin_pic_3");
				skin_pic_4 = _T("bkimg:skin_pic_4");
				skin_pic_5 = _T("bkimg:skin_pic_5");
				skin_pic_6 = _T("bkimg:skin_pic_6");
				skin_pic_7 = _T("bkimg:skin_pic_7");
				skin_pic_8 = _T("bkimg:skin_pic_8");
				skin_pic_9 = _T("bkimg:skin_pic_9");
				skin_pic_10 = _T("bkimg:skin_pic_10");
				skin_pic_11 = _T("bkimg:skin_pic_11");
				skin_pic_12 = _T("bkimg:skin_pic_12");
				skin_pic_13 = _T("bkimg:skin_pic_13");
				skin_pic_14 = _T("bkimg:skin_pic_14");
				skin_pic_15 = _T("bkimg:skin_pic_15");
				skin_pic_16 = _T("bkimg:skin_pic_16");
				skin_pic_17 = _T("bkimg:skin_pic_17");
			}
			const TCHAR * skin_pic_0;
			const TCHAR * skin_pic_1;
			const TCHAR * skin_pic_2;
			const TCHAR * skin_pic_3;
			const TCHAR * skin_pic_4;
			const TCHAR * skin_pic_5;
			const TCHAR * skin_pic_6;
			const TCHAR * skin_pic_7;
			const TCHAR * skin_pic_8;
			const TCHAR * skin_pic_9;
			const TCHAR * skin_pic_10;
			const TCHAR * skin_pic_11;
			const TCHAR * skin_pic_12;
			const TCHAR * skin_pic_13;
			const TCHAR * skin_pic_14;
			const TCHAR * skin_pic_15;
			const TCHAR * skin_pic_16;
			const TCHAR * skin_pic_17;
		}bkimg;
		class _GIF{
			public:
			_GIF(){
				gif_penguin = _T("GIF:gif_penguin");
			}
			const TCHAR * gif_penguin;
		}GIF;
		class _apng{
			public:
			_apng(){
				apng_haha = _T("apng:apng_haha");
			}
			const TCHAR * apng_haha;
		}apng;
		class _rtf{
			public:
			_rtf(){
				rtf_test = _T("rtf:rtf_test");
			}
			const TCHAR * rtf_test;
		}rtf;
		class _lua{
			public:
			_lua(){
				lua_test = _T("lua:lua_test");
			}
			const TCHAR * lua_test;
		}lua;
		class _translator{
			public:
			_translator(){
				lang_cn = _T("translator:lang_cn");
			}
			const TCHAR * lang_cn;
		}translator;
		class _flash{
			public:
			_flash(){
				apple_swf = _T("flash:apple.swf");
			}
			const TCHAR * apple_swf;
		}flash;
		class _ImgTrayMenu{
			public:
			_ImgTrayMenu(){
				circulation = _T("ImgTrayMenu:circulation");
				ilike = _T("ImgTrayMenu:ilike");
				next = _T("ImgTrayMenu:next");
				pause = _T("ImgTrayMenu:pause");
				play = _T("ImgTrayMenu:play");
				pre = _T("ImgTrayMenu:pre");
				volume = _T("ImgTrayMenu:volume");
				menu_ico = _T("ImgTrayMenu:menu_ico");
			}
			const TCHAR * circulation;
			const TCHAR * ilike;
			const TCHAR * next;
			const TCHAR * pause;
			const TCHAR * play;
			const TCHAR * pre;
			const TCHAR * volume;
			const TCHAR * menu_ico;
		}ImgTrayMenu;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"album",65572},
		{L"ani_test",65559},
		{L"artist",65571},
		{L"btn4_1",65594},
		{L"btn4_2",65595},
		{L"btn4_3",65596},
		{L"btn4_4",65597},
		{L"btn4_5",65598},
		{L"btn4_6",65599},
		{L"btnSelectGif",65671},
		{L"btn_append_msg",65644},
		{L"btn_clock",65582},
		{L"btn_close",65703},
		{L"btn_createchildren",65649},
		{L"btn_display",65638},
		{L"btn_down",65580},
		{L"btn_filewnd",65648},
		{L"btn_hidetst",65639},
		{L"btn_init_listbox",65614},
		{L"btn_insert_gif",0},
		{L"btn_lrc",65581},
		{L"btn_menu",65634},
		{L"btn_msgbox",65577},
		{L"btn_next_month",65689},
		{L"btn_open_wrap_content",65640},
		{L"btn_pick_month_cancel",65697},
		{L"btn_pick_month_finish",65698},
		{L"btn_prev_month",65687},
		{L"btn_richedit_open",65645},
		{L"btn_richedit_save",65646},
		{L"btn_run",65682},
		{L"btn_skin",65635},
		{L"btn_start_notify_thread",65659},
		{L"btn_stop_notify_thread",65660},
		{L"btn_test",65563},
		{L"btn_tip",65583},
		{L"btn_today",65691},
		{L"btn_uninstall",65561},
		{L"btn_up",65579},
		{L"btn_webkit_back",65665},
		{L"btn_webkit_fore",65666},
		{L"btn_webkit_go",65669},
		{L"btn_webkit_refresh",65667},
		{L"btn_year_next",65696},
		{L"btn_year_prev",65695},
		{L"cbx_in_lv",65564},
		{L"cbx_interpolator",65672},
		{L"cbx_test",65612},
		{L"chromeTab",65662},
		{L"clock_main",65702},
		{L"col1",65545},
		{L"col2",65550},
		{L"col3",65553},
		{L"col4",65555},
		{L"col5",65557},
		{L"col6",65560},
		{L"color2.1",65625},
		{L"ctrl_flash",65637},
		{L"ctrl_hk1",65574},
		{L"ctrl_hk2",65575},
		{L"edit_drop_bottom",65643},
		{L"edit_drop_top",65642},
		{L"edit_repeat",65685},
		{L"edit_rotate",65654},
		{L"edit_scale",65655},
		{L"edit_skew",65656},
		{L"edit_spin",65578},
		{L"edit_translate",65657},
		{L"edit_url",65668},
		{L"edit_xml",65650},
		{L"flag_win",400},
		{L"fmw_test",65658},
		{L"game_canvas",65675},
		{L"game_toolbar",65681},
		{L"game_wnd",300},
		{L"gif_test",1000},
		{L"giftest",65670},
		{L"group1",65615},
		{L"group2",65621},
		{L"group_months",65693},
		{L"group_years",65694},
		{L"img_file_icon",65567},
		{L"img_icon",65546},
		{L"img_skin_0",10},
		{L"img_skin_1",11},
		{L"img_skin_10",19},
		{L"img_skin_11",20},
		{L"img_skin_12",21},
		{L"img_skin_13",22},
		{L"img_skin_14",23},
		{L"img_skin_15",24},
		{L"img_skin_16",25},
		{L"img_skin_17",26},
		{L"img_skin_18",27},
		{L"img_skin_2",12},
		{L"img_skin_4",13},
		{L"img_skin_5",14},
		{L"img_skin_6",15},
		{L"img_skin_7",16},
		{L"img_skin_8",17},
		{L"img_skin_9",18},
		{L"ip_test",65576},
		{L"lasttime",65573},
		{L"lb_test",65613},
		{L"lc_test",65543},
		{L"lv_test_fix",65562},
		{L"lv_test_flex",65565},
		{L"lv_test_tile",65566},
		{L"matrix_test",65653},
		{L"mclv_test",65544},
		{L"menu_btn_cir",65540},
		{L"menu_btn_ilike",65539},
		{L"menu_btn_next",65538},
		{L"menu_btn_play",65537},
		{L"menu_btn_pre",65536},
		{L"menu_btn_vol",65541},
		{L"menu_slider_vol",65542},
		{L"mp_test",65609},
		{L"musiclist",65568},
		{L"mytree",65674},
		{L"option2.1",65622},
		{L"panel_calendar",65686},
		{L"panel_month_picker",65692},
		{L"playbtn",65570},
		{L"player_1",65676},
		{L"player_2",65677},
		{L"player_3",65678},
		{L"player_4",65679},
		{L"prog_test",65601},
		{L"radio2_1",10000},
		{L"radio2_2",10001},
		{L"radio2_3",10002},
		{L"radio2_4",10003},
		{L"radio2_5",10004},
		{L"radio2_6",10005},
		{L"radio3_1",65588},
		{L"radio3_2",65589},
		{L"radio3_3",65590},
		{L"radio3_4",65591},
		{L"radio3_5",65592},
		{L"radio3_6",65593},
		{L"radio_1",65584},
		{L"radio_2",65585},
		{L"radio_3",65586},
		{L"radio_4",65587},
		{L"rating_score",65551},
		{L"re_gifhost",65647},
		{L"re_notifycenter",65661},
		{L"re_xmlinput",65684},
		{L"sb_test1",65606},
		{L"sb_test2",65607},
		{L"size2.1",65623},
		{L"slider_test",65602},
		{L"slider_test2",65603},
		{L"slider_test3",65604},
		{L"slider_test4",65605},
		{L"songname",65569},
		{L"split_col",65611},
		{L"split_row",65610},
		{L"tab_main",65636},
		{L"tab_radio2",65600},
		{L"text1.1",65616},
		{L"text1.1.1",65618},
		{L"text1.1.2",65619},
		{L"text1.1.3",65617},
		{L"text1.2",65620},
		{L"text2.1",65626},
		{L"text2.2",65624},
		{L"text2.3",65627},
		{L"text2.4",65628},
		{L"text2.5",65629},
		{L"text2.6",65630},
		{L"text2.7",65631},
		{L"text2.8",65632},
		{L"tgl_switch",65700},
		{L"timepicker",65608},
		{L"tree_view_00",65699},
		{L"txt_coins",65683},
		{L"txt_desc",65548},
		{L"txt_index",65549},
		{L"txt_installtime",65556},
		{L"txt_month",65688},
		{L"txt_name",65547},
		{L"txt_path_length",65641},
		{L"txt_rate",65680},
		{L"txt_red",65701},
		{L"txt_score",65552},
		{L"txt_size",65554},
		{L"txt_tip",65704},
		{L"txt_title",65633},
		{L"txt_usetime",65558},
		{L"view_interpolator",65673},
		{L"webkit_toolbar",65664},
		{L"wke_test",65663},
		{L"wnd_calendar",65690},
		{L"wnd_container",65651},
		{L"wnd_rgn",65652}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			album = namedXmlID[1].strName;
			ani_test = namedXmlID[2].strName;
			artist = namedXmlID[3].strName;
			btn4_1 = namedXmlID[4].strName;
			btn4_2 = namedXmlID[5].strName;
			btn4_3 = namedXmlID[6].strName;
			btn4_4 = namedXmlID[7].strName;
			btn4_5 = namedXmlID[8].strName;
			btn4_6 = namedXmlID[9].strName;
			btnSelectGif = namedXmlID[10].strName;
			btn_append_msg = namedXmlID[11].strName;
			btn_clock = namedXmlID[12].strName;
			btn_close = namedXmlID[13].strName;
			btn_createchildren = namedXmlID[14].strName;
			btn_display = namedXmlID[15].strName;
			btn_down = namedXmlID[16].strName;
			btn_filewnd = namedXmlID[17].strName;
			btn_hidetst = namedXmlID[18].strName;
			btn_init_listbox = namedXmlID[19].strName;
			btn_insert_gif = namedXmlID[20].strName;
			btn_lrc = namedXmlID[21].strName;
			btn_menu = namedXmlID[22].strName;
			btn_msgbox = namedXmlID[23].strName;
			btn_next_month = namedXmlID[24].strName;
			btn_open_wrap_content = namedXmlID[25].strName;
			btn_pick_month_cancel = namedXmlID[26].strName;
			btn_pick_month_finish = namedXmlID[27].strName;
			btn_prev_month = namedXmlID[28].strName;
			btn_richedit_open = namedXmlID[29].strName;
			btn_richedit_save = namedXmlID[30].strName;
			btn_run = namedXmlID[31].strName;
			btn_skin = namedXmlID[32].strName;
			btn_start_notify_thread = namedXmlID[33].strName;
			btn_stop_notify_thread = namedXmlID[34].strName;
			btn_test = namedXmlID[35].strName;
			btn_tip = namedXmlID[36].strName;
			btn_today = namedXmlID[37].strName;
			btn_uninstall = namedXmlID[38].strName;
			btn_up = namedXmlID[39].strName;
			btn_webkit_back = namedXmlID[40].strName;
			btn_webkit_fore = namedXmlID[41].strName;
			btn_webkit_go = namedXmlID[42].strName;
			btn_webkit_refresh = namedXmlID[43].strName;
			btn_year_next = namedXmlID[44].strName;
			btn_year_prev = namedXmlID[45].strName;
			cbx_in_lv = namedXmlID[46].strName;
			cbx_interpolator = namedXmlID[47].strName;
			cbx_test = namedXmlID[48].strName;
			chromeTab = namedXmlID[49].strName;
			clock_main = namedXmlID[50].strName;
			col1 = namedXmlID[51].strName;
			col2 = namedXmlID[52].strName;
			col3 = namedXmlID[53].strName;
			col4 = namedXmlID[54].strName;
			col5 = namedXmlID[55].strName;
			col6 = namedXmlID[56].strName;
			color2_1 = namedXmlID[57].strName;
			ctrl_flash = namedXmlID[58].strName;
			ctrl_hk1 = namedXmlID[59].strName;
			ctrl_hk2 = namedXmlID[60].strName;
			edit_drop_bottom = namedXmlID[61].strName;
			edit_drop_top = namedXmlID[62].strName;
			edit_repeat = namedXmlID[63].strName;
			edit_rotate = namedXmlID[64].strName;
			edit_scale = namedXmlID[65].strName;
			edit_skew = namedXmlID[66].strName;
			edit_spin = namedXmlID[67].strName;
			edit_translate = namedXmlID[68].strName;
			edit_url = namedXmlID[69].strName;
			edit_xml = namedXmlID[70].strName;
			flag_win = namedXmlID[71].strName;
			fmw_test = namedXmlID[72].strName;
			game_canvas = namedXmlID[73].strName;
			game_toolbar = namedXmlID[74].strName;
			game_wnd = namedXmlID[75].strName;
			gif_test = namedXmlID[76].strName;
			giftest = namedXmlID[77].strName;
			group1 = namedXmlID[78].strName;
			group2 = namedXmlID[79].strName;
			group_months = namedXmlID[80].strName;
			group_years = namedXmlID[81].strName;
			img_file_icon = namedXmlID[82].strName;
			img_icon = namedXmlID[83].strName;
			img_skin_0 = namedXmlID[84].strName;
			img_skin_1 = namedXmlID[85].strName;
			img_skin_10 = namedXmlID[86].strName;
			img_skin_11 = namedXmlID[87].strName;
			img_skin_12 = namedXmlID[88].strName;
			img_skin_13 = namedXmlID[89].strName;
			img_skin_14 = namedXmlID[90].strName;
			img_skin_15 = namedXmlID[91].strName;
			img_skin_16 = namedXmlID[92].strName;
			img_skin_17 = namedXmlID[93].strName;
			img_skin_18 = namedXmlID[94].strName;
			img_skin_2 = namedXmlID[95].strName;
			img_skin_4 = namedXmlID[96].strName;
			img_skin_5 = namedXmlID[97].strName;
			img_skin_6 = namedXmlID[98].strName;
			img_skin_7 = namedXmlID[99].strName;
			img_skin_8 = namedXmlID[100].strName;
			img_skin_9 = namedXmlID[101].strName;
			ip_test = namedXmlID[102].strName;
			lasttime = namedXmlID[103].strName;
			lb_test = namedXmlID[104].strName;
			lc_test = namedXmlID[105].strName;
			lv_test_fix = namedXmlID[106].strName;
			lv_test_flex = namedXmlID[107].strName;
			lv_test_tile = namedXmlID[108].strName;
			matrix_test = namedXmlID[109].strName;
			mclv_test = namedXmlID[110].strName;
			menu_btn_cir = namedXmlID[111].strName;
			menu_btn_ilike = namedXmlID[112].strName;
			menu_btn_next = namedXmlID[113].strName;
			menu_btn_play = namedXmlID[114].strName;
			menu_btn_pre = namedXmlID[115].strName;
			menu_btn_vol = namedXmlID[116].strName;
			menu_slider_vol = namedXmlID[117].strName;
			mp_test = namedXmlID[118].strName;
			musiclist = namedXmlID[119].strName;
			mytree = namedXmlID[120].strName;
			option2_1 = namedXmlID[121].strName;
			panel_calendar = namedXmlID[122].strName;
			panel_month_picker = namedXmlID[123].strName;
			playbtn = namedXmlID[124].strName;
			player_1 = namedXmlID[125].strName;
			player_2 = namedXmlID[126].strName;
			player_3 = namedXmlID[127].strName;
			player_4 = namedXmlID[128].strName;
			prog_test = namedXmlID[129].strName;
			radio2_1 = namedXmlID[130].strName;
			radio2_2 = namedXmlID[131].strName;
			radio2_3 = namedXmlID[132].strName;
			radio2_4 = namedXmlID[133].strName;
			radio2_5 = namedXmlID[134].strName;
			radio2_6 = namedXmlID[135].strName;
			radio3_1 = namedXmlID[136].strName;
			radio3_2 = namedXmlID[137].strName;
			radio3_3 = namedXmlID[138].strName;
			radio3_4 = namedXmlID[139].strName;
			radio3_5 = namedXmlID[140].strName;
			radio3_6 = namedXmlID[141].strName;
			radio_1 = namedXmlID[142].strName;
			radio_2 = namedXmlID[143].strName;
			radio_3 = namedXmlID[144].strName;
			radio_4 = namedXmlID[145].strName;
			rating_score = namedXmlID[146].strName;
			re_gifhost = namedXmlID[147].strName;
			re_notifycenter = namedXmlID[148].strName;
			re_xmlinput = namedXmlID[149].strName;
			sb_test1 = namedXmlID[150].strName;
			sb_test2 = namedXmlID[151].strName;
			size2_1 = namedXmlID[152].strName;
			slider_test = namedXmlID[153].strName;
			slider_test2 = namedXmlID[154].strName;
			slider_test3 = namedXmlID[155].strName;
			slider_test4 = namedXmlID[156].strName;
			songname = namedXmlID[157].strName;
			split_col = namedXmlID[158].strName;
			split_row = namedXmlID[159].strName;
			tab_main = namedXmlID[160].strName;
			tab_radio2 = namedXmlID[161].strName;
			text1_1 = namedXmlID[162].strName;
			text1_1_1 = namedXmlID[163].strName;
			text1_1_2 = namedXmlID[164].strName;
			text1_1_3 = namedXmlID[165].strName;
			text1_2 = namedXmlID[166].strName;
			text2_1 = namedXmlID[167].strName;
			text2_2 = namedXmlID[168].strName;
			text2_3 = namedXmlID[169].strName;
			text2_4 = namedXmlID[170].strName;
			text2_5 = namedXmlID[171].strName;
			text2_6 = namedXmlID[172].strName;
			text2_7 = namedXmlID[173].strName;
			text2_8 = namedXmlID[174].strName;
			tgl_switch = namedXmlID[175].strName;
			timepicker = namedXmlID[176].strName;
			tree_view_00 = namedXmlID[177].strName;
			txt_coins = namedXmlID[178].strName;
			txt_desc = namedXmlID[179].strName;
			txt_index = namedXmlID[180].strName;
			txt_installtime = namedXmlID[181].strName;
			txt_month = namedXmlID[182].strName;
			txt_name = namedXmlID[183].strName;
			txt_path_length = namedXmlID[184].strName;
			txt_rate = namedXmlID[185].strName;
			txt_red = namedXmlID[186].strName;
			txt_score = namedXmlID[187].strName;
			txt_size = namedXmlID[188].strName;
			txt_tip = namedXmlID[189].strName;
			txt_title = namedXmlID[190].strName;
			txt_usetime = namedXmlID[191].strName;
			view_interpolator = namedXmlID[192].strName;
			webkit_toolbar = namedXmlID[193].strName;
			wke_test = namedXmlID[194].strName;
			wnd_calendar = namedXmlID[195].strName;
			wnd_container = namedXmlID[196].strName;
			wnd_rgn = namedXmlID[197].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * album;
		 const wchar_t * ani_test;
		 const wchar_t * artist;
		 const wchar_t * btn4_1;
		 const wchar_t * btn4_2;
		 const wchar_t * btn4_3;
		 const wchar_t * btn4_4;
		 const wchar_t * btn4_5;
		 const wchar_t * btn4_6;
		 const wchar_t * btnSelectGif;
		 const wchar_t * btn_append_msg;
		 const wchar_t * btn_clock;
		 const wchar_t * btn_close;
		 const wchar_t * btn_createchildren;
		 const wchar_t * btn_display;
		 const wchar_t * btn_down;
		 const wchar_t * btn_filewnd;
		 const wchar_t * btn_hidetst;
		 const wchar_t * btn_init_listbox;
		 const wchar_t * btn_insert_gif;
		 const wchar_t * btn_lrc;
		 const wchar_t * btn_menu;
		 const wchar_t * btn_msgbox;
		 const wchar_t * btn_next_month;
		 const wchar_t * btn_open_wrap_content;
		 const wchar_t * btn_pick_month_cancel;
		 const wchar_t * btn_pick_month_finish;
		 const wchar_t * btn_prev_month;
		 const wchar_t * btn_richedit_open;
		 const wchar_t * btn_richedit_save;
		 const wchar_t * btn_run;
		 const wchar_t * btn_skin;
		 const wchar_t * btn_start_notify_thread;
		 const wchar_t * btn_stop_notify_thread;
		 const wchar_t * btn_test;
		 const wchar_t * btn_tip;
		 const wchar_t * btn_today;
		 const wchar_t * btn_uninstall;
		 const wchar_t * btn_up;
		 const wchar_t * btn_webkit_back;
		 const wchar_t * btn_webkit_fore;
		 const wchar_t * btn_webkit_go;
		 const wchar_t * btn_webkit_refresh;
		 const wchar_t * btn_year_next;
		 const wchar_t * btn_year_prev;
		 const wchar_t * cbx_in_lv;
		 const wchar_t * cbx_interpolator;
		 const wchar_t * cbx_test;
		 const wchar_t * chromeTab;
		 const wchar_t * clock_main;
		 const wchar_t * col1;
		 const wchar_t * col2;
		 const wchar_t * col3;
		 const wchar_t * col4;
		 const wchar_t * col5;
		 const wchar_t * col6;
		 const wchar_t * color2_1;
		 const wchar_t * ctrl_flash;
		 const wchar_t * ctrl_hk1;
		 const wchar_t * ctrl_hk2;
		 const wchar_t * edit_drop_bottom;
		 const wchar_t * edit_drop_top;
		 const wchar_t * edit_repeat;
		 const wchar_t * edit_rotate;
		 const wchar_t * edit_scale;
		 const wchar_t * edit_skew;
		 const wchar_t * edit_spin;
		 const wchar_t * edit_translate;
		 const wchar_t * edit_url;
		 const wchar_t * edit_xml;
		 const wchar_t * flag_win;
		 const wchar_t * fmw_test;
		 const wchar_t * game_canvas;
		 const wchar_t * game_toolbar;
		 const wchar_t * game_wnd;
		 const wchar_t * gif_test;
		 const wchar_t * giftest;
		 const wchar_t * group1;
		 const wchar_t * group2;
		 const wchar_t * group_months;
		 const wchar_t * group_years;
		 const wchar_t * img_file_icon;
		 const wchar_t * img_icon;
		 const wchar_t * img_skin_0;
		 const wchar_t * img_skin_1;
		 const wchar_t * img_skin_10;
		 const wchar_t * img_skin_11;
		 const wchar_t * img_skin_12;
		 const wchar_t * img_skin_13;
		 const wchar_t * img_skin_14;
		 const wchar_t * img_skin_15;
		 const wchar_t * img_skin_16;
		 const wchar_t * img_skin_17;
		 const wchar_t * img_skin_18;
		 const wchar_t * img_skin_2;
		 const wchar_t * img_skin_4;
		 const wchar_t * img_skin_5;
		 const wchar_t * img_skin_6;
		 const wchar_t * img_skin_7;
		 const wchar_t * img_skin_8;
		 const wchar_t * img_skin_9;
		 const wchar_t * ip_test;
		 const wchar_t * lasttime;
		 const wchar_t * lb_test;
		 const wchar_t * lc_test;
		 const wchar_t * lv_test_fix;
		 const wchar_t * lv_test_flex;
		 const wchar_t * lv_test_tile;
		 const wchar_t * matrix_test;
		 const wchar_t * mclv_test;
		 const wchar_t * menu_btn_cir;
		 const wchar_t * menu_btn_ilike;
		 const wchar_t * menu_btn_next;
		 const wchar_t * menu_btn_play;
		 const wchar_t * menu_btn_pre;
		 const wchar_t * menu_btn_vol;
		 const wchar_t * menu_slider_vol;
		 const wchar_t * mp_test;
		 const wchar_t * musiclist;
		 const wchar_t * mytree;
		 const wchar_t * option2_1;
		 const wchar_t * panel_calendar;
		 const wchar_t * panel_month_picker;
		 const wchar_t * playbtn;
		 const wchar_t * player_1;
		 const wchar_t * player_2;
		 const wchar_t * player_3;
		 const wchar_t * player_4;
		 const wchar_t * prog_test;
		 const wchar_t * radio2_1;
		 const wchar_t * radio2_2;
		 const wchar_t * radio2_3;
		 const wchar_t * radio2_4;
		 const wchar_t * radio2_5;
		 const wchar_t * radio2_6;
		 const wchar_t * radio3_1;
		 const wchar_t * radio3_2;
		 const wchar_t * radio3_3;
		 const wchar_t * radio3_4;
		 const wchar_t * radio3_5;
		 const wchar_t * radio3_6;
		 const wchar_t * radio_1;
		 const wchar_t * radio_2;
		 const wchar_t * radio_3;
		 const wchar_t * radio_4;
		 const wchar_t * rating_score;
		 const wchar_t * re_gifhost;
		 const wchar_t * re_notifycenter;
		 const wchar_t * re_xmlinput;
		 const wchar_t * sb_test1;
		 const wchar_t * sb_test2;
		 const wchar_t * size2_1;
		 const wchar_t * slider_test;
		 const wchar_t * slider_test2;
		 const wchar_t * slider_test3;
		 const wchar_t * slider_test4;
		 const wchar_t * songname;
		 const wchar_t * split_col;
		 const wchar_t * split_row;
		 const wchar_t * tab_main;
		 const wchar_t * tab_radio2;
		 const wchar_t * text1_1;
		 const wchar_t * text1_1_1;
		 const wchar_t * text1_1_2;
		 const wchar_t * text1_1_3;
		 const wchar_t * text1_2;
		 const wchar_t * text2_1;
		 const wchar_t * text2_2;
		 const wchar_t * text2_3;
		 const wchar_t * text2_4;
		 const wchar_t * text2_5;
		 const wchar_t * text2_6;
		 const wchar_t * text2_7;
		 const wchar_t * text2_8;
		 const wchar_t * tgl_switch;
		 const wchar_t * timepicker;
		 const wchar_t * tree_view_00;
		 const wchar_t * txt_coins;
		 const wchar_t * txt_desc;
		 const wchar_t * txt_index;
		 const wchar_t * txt_installtime;
		 const wchar_t * txt_month;
		 const wchar_t * txt_name;
		 const wchar_t * txt_path_length;
		 const wchar_t * txt_rate;
		 const wchar_t * txt_red;
		 const wchar_t * txt_score;
		 const wchar_t * txt_size;
		 const wchar_t * txt_tip;
		 const wchar_t * txt_title;
		 const wchar_t * txt_usetime;
		 const wchar_t * view_interpolator;
		 const wchar_t * webkit_toolbar;
		 const wchar_t * wke_test;
		 const wchar_t * wnd_calendar;
		 const wchar_t * wnd_container;
		 const wchar_t * wnd_rgn;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int album	=	65572;
		const static int ani_test	=	65559;
		const static int artist	=	65571;
		const static int btn4_1	=	65594;
		const static int btn4_2	=	65595;
		const static int btn4_3	=	65596;
		const static int btn4_4	=	65597;
		const static int btn4_5	=	65598;
		const static int btn4_6	=	65599;
		const static int btnSelectGif	=	65671;
		const static int btn_append_msg	=	65644;
		const static int btn_clock	=	65582;
		const static int btn_close	=	65703;
		const static int btn_createchildren	=	65649;
		const static int btn_display	=	65638;
		const static int btn_down	=	65580;
		const static int btn_filewnd	=	65648;
		const static int btn_hidetst	=	65639;
		const static int btn_init_listbox	=	65614;
		const static int btn_insert_gif	=	0;
		const static int btn_lrc	=	65581;
		const static int btn_menu	=	65634;
		const static int btn_msgbox	=	65577;
		const static int btn_next_month	=	65689;
		const static int btn_open_wrap_content	=	65640;
		const static int btn_pick_month_cancel	=	65697;
		const static int btn_pick_month_finish	=	65698;
		const static int btn_prev_month	=	65687;
		const static int btn_richedit_open	=	65645;
		const static int btn_richedit_save	=	65646;
		const static int btn_run	=	65682;
		const static int btn_skin	=	65635;
		const static int btn_start_notify_thread	=	65659;
		const static int btn_stop_notify_thread	=	65660;
		const static int btn_test	=	65563;
		const static int btn_tip	=	65583;
		const static int btn_today	=	65691;
		const static int btn_uninstall	=	65561;
		const static int btn_up	=	65579;
		const static int btn_webkit_back	=	65665;
		const static int btn_webkit_fore	=	65666;
		const static int btn_webkit_go	=	65669;
		const static int btn_webkit_refresh	=	65667;
		const static int btn_year_next	=	65696;
		const static int btn_year_prev	=	65695;
		const static int cbx_in_lv	=	65564;
		const static int cbx_interpolator	=	65672;
		const static int cbx_test	=	65612;
		const static int chromeTab	=	65662;
		const static int clock_main	=	65702;
		const static int col1	=	65545;
		const static int col2	=	65550;
		const static int col3	=	65553;
		const static int col4	=	65555;
		const static int col5	=	65557;
		const static int col6	=	65560;
		const static int color2_1	=	65625;
		const static int ctrl_flash	=	65637;
		const static int ctrl_hk1	=	65574;
		const static int ctrl_hk2	=	65575;
		const static int edit_drop_bottom	=	65643;
		const static int edit_drop_top	=	65642;
		const static int edit_repeat	=	65685;
		const static int edit_rotate	=	65654;
		const static int edit_scale	=	65655;
		const static int edit_skew	=	65656;
		const static int edit_spin	=	65578;
		const static int edit_translate	=	65657;
		const static int edit_url	=	65668;
		const static int edit_xml	=	65650;
		const static int flag_win	=	400;
		const static int fmw_test	=	65658;
		const static int game_canvas	=	65675;
		const static int game_toolbar	=	65681;
		const static int game_wnd	=	300;
		const static int gif_test	=	1000;
		const static int giftest	=	65670;
		const static int group1	=	65615;
		const static int group2	=	65621;
		const static int group_months	=	65693;
		const static int group_years	=	65694;
		const static int img_file_icon	=	65567;
		const static int img_icon	=	65546;
		const static int img_skin_0	=	10;
		const static int img_skin_1	=	11;
		const static int img_skin_10	=	19;
		const static int img_skin_11	=	20;
		const static int img_skin_12	=	21;
		const static int img_skin_13	=	22;
		const static int img_skin_14	=	23;
		const static int img_skin_15	=	24;
		const static int img_skin_16	=	25;
		const static int img_skin_17	=	26;
		const static int img_skin_18	=	27;
		const static int img_skin_2	=	12;
		const static int img_skin_4	=	13;
		const static int img_skin_5	=	14;
		const static int img_skin_6	=	15;
		const static int img_skin_7	=	16;
		const static int img_skin_8	=	17;
		const static int img_skin_9	=	18;
		const static int ip_test	=	65576;
		const static int lasttime	=	65573;
		const static int lb_test	=	65613;
		const static int lc_test	=	65543;
		const static int lv_test_fix	=	65562;
		const static int lv_test_flex	=	65565;
		const static int lv_test_tile	=	65566;
		const static int matrix_test	=	65653;
		const static int mclv_test	=	65544;
		const static int menu_btn_cir	=	65540;
		const static int menu_btn_ilike	=	65539;
		const static int menu_btn_next	=	65538;
		const static int menu_btn_play	=	65537;
		const static int menu_btn_pre	=	65536;
		const static int menu_btn_vol	=	65541;
		const static int menu_slider_vol	=	65542;
		const static int mp_test	=	65609;
		const static int musiclist	=	65568;
		const static int mytree	=	65674;
		const static int option2_1	=	65622;
		const static int panel_calendar	=	65686;
		const static int panel_month_picker	=	65692;
		const static int playbtn	=	65570;
		const static int player_1	=	65676;
		const static int player_2	=	65677;
		const static int player_3	=	65678;
		const static int player_4	=	65679;
		const static int prog_test	=	65601;
		const static int radio2_1	=	10000;
		const static int radio2_2	=	10001;
		const static int radio2_3	=	10002;
		const static int radio2_4	=	10003;
		const static int radio2_5	=	10004;
		const static int radio2_6	=	10005;
		const static int radio3_1	=	65588;
		const static int radio3_2	=	65589;
		const static int radio3_3	=	65590;
		const static int radio3_4	=	65591;
		const static int radio3_5	=	65592;
		const static int radio3_6	=	65593;
		const static int radio_1	=	65584;
		const static int radio_2	=	65585;
		const static int radio_3	=	65586;
		const static int radio_4	=	65587;
		const static int rating_score	=	65551;
		const static int re_gifhost	=	65647;
		const static int re_notifycenter	=	65661;
		const static int re_xmlinput	=	65684;
		const static int sb_test1	=	65606;
		const static int sb_test2	=	65607;
		const static int size2_1	=	65623;
		const static int slider_test	=	65602;
		const static int slider_test2	=	65603;
		const static int slider_test3	=	65604;
		const static int slider_test4	=	65605;
		const static int songname	=	65569;
		const static int split_col	=	65611;
		const static int split_row	=	65610;
		const static int tab_main	=	65636;
		const static int tab_radio2	=	65600;
		const static int text1_1	=	65616;
		const static int text1_1_1	=	65618;
		const static int text1_1_2	=	65619;
		const static int text1_1_3	=	65617;
		const static int text1_2	=	65620;
		const static int text2_1	=	65626;
		const static int text2_2	=	65624;
		const static int text2_3	=	65627;
		const static int text2_4	=	65628;
		const static int text2_5	=	65629;
		const static int text2_6	=	65630;
		const static int text2_7	=	65631;
		const static int text2_8	=	65632;
		const static int tgl_switch	=	65700;
		const static int timepicker	=	65608;
		const static int tree_view_00	=	65699;
		const static int txt_coins	=	65683;
		const static int txt_desc	=	65548;
		const static int txt_index	=	65549;
		const static int txt_installtime	=	65556;
		const static int txt_month	=	65688;
		const static int txt_name	=	65547;
		const static int txt_path_length	=	65641;
		const static int txt_rate	=	65680;
		const static int txt_red	=	65701;
		const static int txt_score	=	65552;
		const static int txt_size	=	65554;
		const static int txt_tip	=	65704;
		const static int txt_title	=	65633;
		const static int txt_usetime	=	65558;
		const static int view_interpolator	=	65673;
		const static int webkit_toolbar	=	65664;
		const static int wke_test	=	65663;
		const static int wnd_calendar	=	65690;
		const static int wnd_container	=	65651;
		const static int wnd_rgn	=	65652;
		}id;

		class _string{
		public:
		const static int mccol_1	=	0;
		const static int mccol_2	=	1;
		const static int mccol_3	=	2;
		const static int mccol_4	=	3;
		const static int mccol_5	=	4;
		const static int mccol_6	=	5;
		const static int setskinwndtitle	=	6;
		const static int title	=	7;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
