﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3,2};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("dz_BT"),.title=tsc("Dzongkha language locale for Bhutan"),.source=tsc("Sherubtse College\t\t;\t\tfast_io"),.address=tsc("Kanglung, Bhutan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("fast_io"),.email=tsc("bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Dzongkha"),.territory=tsc("Bhutan"),.revision=tsc("0.3"),.date=tsc("2004-09-03")},.monetary={.int_curr_symbol=tsc("BTN "),.currency_symbol=tsc("Nu."),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,2},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=3,.frac_digits=3,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc("ཟླ་"),tsc("མིར་"),tsc("ལྷག་"),tsc("པུར་"),tsc("སངས་"),tsc("སྤེན་"),tsc("ཉི་")},.day={tsc("གཟའ་ཟླ་བ་"),tsc("གཟའ་མིག་དམར་"),tsc("གཟའ་ལྷག་ཕ་"),tsc("གཟའ་པུར་བུ་"),tsc("གཟའ་པ་སངས་"),tsc("གཟའ་སྤེན་ཕ་"),tsc("གཟའ་ཉི་མ་")},.abmon={tsc("ཟླ་༡"),tsc("ཟླ་༢"),tsc("ཟླ་༣"),tsc("ཟླ་༤"),tsc("ཟླ་༥"),tsc("ཟླ་༦"),tsc("ཟླ་༧"),tsc("ཟླ་༨"),tsc("ཟླ་༩"),tsc("ཟླ་༡༠"),tsc("ཟླ་༡༡"),tsc("ཟླ་༡༢")},.mon={tsc("ཟླ་བ་དང་པ་"),tsc("ཟླ་བ་གཉིས་པ་"),tsc("ཟླ་བ་གསུམ་པ་"),tsc("ཟླ་བ་བཞི་པ་"),tsc("ཟླ་བ་ལྔ་ཕ་"),tsc("ཟླ་བ་དྲུག་པ་"),tsc("ཟླ་བ་བདུནཔ་"),tsc("ཟླ་བ་བརྒྱད་པ་"),tsc("ཟླ་བ་དགུ་པ་"),tsc("ཟླ་བ་བཅུ་པ་"),tsc("ཟླ་བ་བཅུ་གཅིག་པ་"),tsc("ཟླ་བ་བཅུ་གཉིས་པ་")},.d_t_fmt=tsc("པསྱི་ལོ%yཟལ%mཚེས%dཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.d_fmt=tsc("པསྱི་ལོ%yཟལ%mཚེས%d"),.t_fmt=tsc("ཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.t_fmt_ampm=tsc("ཆུ་ཚོད%Iཀསར་མ%Mཀསར་ཆ%S %p"),.date_fmt=tsc("པསྱི་ལོ%yཟལ%mཚེས%dཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.am_pm={tsc("ངས་ཆ"),tsc("ཕྱི་ཆ")},.week={7,19971130,1}},.messages={.yesexpr=tsc("^[+1yYཨ]"),.noexpr=tsc("^[-0nNམ]"),.yesstr=tsc("ཨིན་"),.nostr=tsc("མེན་")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("975")},.name={.name_fmt=tsc("%p%t%g%t%m%t%f"),.name_gen=tsc(""),.name_miss=tsc("མོ"),.name_mr=tsc("ཕོ"),.name_mrs=tsc("ཨམ")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%r%t%e%t%b%N%h%t%s%N%T%N%S%N%z%c%N"),.country_name=tsc("འབྲུག"),.country_ab2=tsc("BT"),.country_ab3=tsc("BTN"),.country_num=64,.country_car=tsc("BHT"),.lang_name=tsc("རྫོང་ཁ"),.lang_ab=tsc("dz"),.lang_term=tsc("dzo"),.lang_lib=tsc("dzo")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"dz_BT"),.title=tsc(L"Dzongkha language locale for Bhutan"),.source=tsc(L"Sherubtse College\t\t;\t\tfast_io"),.address=tsc(L"Kanglung, Bhutan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Dzongkha"),.territory=tsc(L"Bhutan"),.revision=tsc(L"0.3"),.date=tsc(L"2004-09-03")},.monetary={.int_curr_symbol=tsc(L"BTN "),.currency_symbol=tsc(L"Nu."),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,2},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=3,.frac_digits=3,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(L"ཟླ་"),tsc(L"མིར་"),tsc(L"ལྷག་"),tsc(L"པུར་"),tsc(L"སངས་"),tsc(L"སྤེན་"),tsc(L"ཉི་")},.day={tsc(L"གཟའ་ཟླ་བ་"),tsc(L"གཟའ་མིག་དམར་"),tsc(L"གཟའ་ལྷག་ཕ་"),tsc(L"གཟའ་པུར་བུ་"),tsc(L"གཟའ་པ་སངས་"),tsc(L"གཟའ་སྤེན་ཕ་"),tsc(L"གཟའ་ཉི་མ་")},.abmon={tsc(L"ཟླ་༡"),tsc(L"ཟླ་༢"),tsc(L"ཟླ་༣"),tsc(L"ཟླ་༤"),tsc(L"ཟླ་༥"),tsc(L"ཟླ་༦"),tsc(L"ཟླ་༧"),tsc(L"ཟླ་༨"),tsc(L"ཟླ་༩"),tsc(L"ཟླ་༡༠"),tsc(L"ཟླ་༡༡"),tsc(L"ཟླ་༡༢")},.mon={tsc(L"ཟླ་བ་དང་པ་"),tsc(L"ཟླ་བ་གཉིས་པ་"),tsc(L"ཟླ་བ་གསུམ་པ་"),tsc(L"ཟླ་བ་བཞི་པ་"),tsc(L"ཟླ་བ་ལྔ་ཕ་"),tsc(L"ཟླ་བ་དྲུག་པ་"),tsc(L"ཟླ་བ་བདུནཔ་"),tsc(L"ཟླ་བ་བརྒྱད་པ་"),tsc(L"ཟླ་བ་དགུ་པ་"),tsc(L"ཟླ་བ་བཅུ་པ་"),tsc(L"ཟླ་བ་བཅུ་གཅིག་པ་"),tsc(L"ཟླ་བ་བཅུ་གཉིས་པ་")},.d_t_fmt=tsc(L"པསྱི་ལོ%yཟལ%mཚེས%dཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.d_fmt=tsc(L"པསྱི་ལོ%yཟལ%mཚེས%d"),.t_fmt=tsc(L"ཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.t_fmt_ampm=tsc(L"ཆུ་ཚོད%Iཀསར་མ%Mཀསར་ཆ%S %p"),.date_fmt=tsc(L"པསྱི་ལོ%yཟལ%mཚེས%dཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.am_pm={tsc(L"ངས་ཆ"),tsc(L"ཕྱི་ཆ")},.week={7,19971130,1}},.messages={.yesexpr=tsc(L"^[+1yYཨ]"),.noexpr=tsc(L"^[-0nNམ]"),.yesstr=tsc(L"ཨིན་"),.nostr=tsc(L"མེན་")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"975")},.name={.name_fmt=tsc(L"%p%t%g%t%m%t%f"),.name_gen=tsc(L""),.name_miss=tsc(L"མོ"),.name_mr=tsc(L"ཕོ"),.name_mrs=tsc(L"ཨམ")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%r%t%e%t%b%N%h%t%s%N%T%N%S%N%z%c%N"),.country_name=tsc(L"འབྲུག"),.country_ab2=tsc(L"BT"),.country_ab3=tsc(L"BTN"),.country_num=64,.country_car=tsc(L"BHT"),.lang_name=tsc(L"རྫོང་ཁ"),.lang_ab=tsc(L"dz"),.lang_term=tsc(L"dzo"),.lang_lib=tsc(L"dzo")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"dz_BT"),.title=tsc(u8"Dzongkha language locale for Bhutan"),.source=tsc(u8"Sherubtse College\t\t;\t\tfast_io"),.address=tsc(u8"Kanglung, Bhutan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Dzongkha"),.territory=tsc(u8"Bhutan"),.revision=tsc(u8"0.3"),.date=tsc(u8"2004-09-03")},.monetary={.int_curr_symbol=tsc(u8"BTN "),.currency_symbol=tsc(u8"Nu."),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,2},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=3,.frac_digits=3,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(u8"ཟླ་"),tsc(u8"མིར་"),tsc(u8"ལྷག་"),tsc(u8"པུར་"),tsc(u8"སངས་"),tsc(u8"སྤེན་"),tsc(u8"ཉི་")},.day={tsc(u8"གཟའ་ཟླ་བ་"),tsc(u8"གཟའ་མིག་དམར་"),tsc(u8"གཟའ་ལྷག་ཕ་"),tsc(u8"གཟའ་པུར་བུ་"),tsc(u8"གཟའ་པ་སངས་"),tsc(u8"གཟའ་སྤེན་ཕ་"),tsc(u8"གཟའ་ཉི་མ་")},.abmon={tsc(u8"ཟླ་༡"),tsc(u8"ཟླ་༢"),tsc(u8"ཟླ་༣"),tsc(u8"ཟླ་༤"),tsc(u8"ཟླ་༥"),tsc(u8"ཟླ་༦"),tsc(u8"ཟླ་༧"),tsc(u8"ཟླ་༨"),tsc(u8"ཟླ་༩"),tsc(u8"ཟླ་༡༠"),tsc(u8"ཟླ་༡༡"),tsc(u8"ཟླ་༡༢")},.mon={tsc(u8"ཟླ་བ་དང་པ་"),tsc(u8"ཟླ་བ་གཉིས་པ་"),tsc(u8"ཟླ་བ་གསུམ་པ་"),tsc(u8"ཟླ་བ་བཞི་པ་"),tsc(u8"ཟླ་བ་ལྔ་ཕ་"),tsc(u8"ཟླ་བ་དྲུག་པ་"),tsc(u8"ཟླ་བ་བདུནཔ་"),tsc(u8"ཟླ་བ་བརྒྱད་པ་"),tsc(u8"ཟླ་བ་དགུ་པ་"),tsc(u8"ཟླ་བ་བཅུ་པ་"),tsc(u8"ཟླ་བ་བཅུ་གཅིག་པ་"),tsc(u8"ཟླ་བ་བཅུ་གཉིས་པ་")},.d_t_fmt=tsc(u8"པསྱི་ལོ%yཟལ%mཚེས%dཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.d_fmt=tsc(u8"པསྱི་ལོ%yཟལ%mཚེས%d"),.t_fmt=tsc(u8"ཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.t_fmt_ampm=tsc(u8"ཆུ་ཚོད%Iཀསར་མ%Mཀསར་ཆ%S %p"),.date_fmt=tsc(u8"པསྱི་ལོ%yཟལ%mཚེས%dཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.am_pm={tsc(u8"ངས་ཆ"),tsc(u8"ཕྱི་ཆ")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u8"^[+1yYཨ]"),.noexpr=tsc(u8"^[-0nNམ]"),.yesstr=tsc(u8"ཨིན་"),.nostr=tsc(u8"མེན་")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"975")},.name={.name_fmt=tsc(u8"%p%t%g%t%m%t%f"),.name_gen=tsc(u8""),.name_miss=tsc(u8"མོ"),.name_mr=tsc(u8"ཕོ"),.name_mrs=tsc(u8"ཨམ")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%r%t%e%t%b%N%h%t%s%N%T%N%S%N%z%c%N"),.country_name=tsc(u8"འབྲུག"),.country_ab2=tsc(u8"BT"),.country_ab3=tsc(u8"BTN"),.country_num=64,.country_car=tsc(u8"BHT"),.lang_name=tsc(u8"རྫོང་ཁ"),.lang_ab=tsc(u8"dz"),.lang_term=tsc(u8"dzo"),.lang_lib=tsc(u8"dzo")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"dz_BT"),.title=tsc(u"Dzongkha language locale for Bhutan"),.source=tsc(u"Sherubtse College\t\t;\t\tfast_io"),.address=tsc(u"Kanglung, Bhutan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Dzongkha"),.territory=tsc(u"Bhutan"),.revision=tsc(u"0.3"),.date=tsc(u"2004-09-03")},.monetary={.int_curr_symbol=tsc(u"BTN "),.currency_symbol=tsc(u"Nu."),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,2},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=3,.frac_digits=3,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(u"ཟླ་"),tsc(u"མིར་"),tsc(u"ལྷག་"),tsc(u"པུར་"),tsc(u"སངས་"),tsc(u"སྤེན་"),tsc(u"ཉི་")},.day={tsc(u"གཟའ་ཟླ་བ་"),tsc(u"གཟའ་མིག་དམར་"),tsc(u"གཟའ་ལྷག་ཕ་"),tsc(u"གཟའ་པུར་བུ་"),tsc(u"གཟའ་པ་སངས་"),tsc(u"གཟའ་སྤེན་ཕ་"),tsc(u"གཟའ་ཉི་མ་")},.abmon={tsc(u"ཟླ་༡"),tsc(u"ཟླ་༢"),tsc(u"ཟླ་༣"),tsc(u"ཟླ་༤"),tsc(u"ཟླ་༥"),tsc(u"ཟླ་༦"),tsc(u"ཟླ་༧"),tsc(u"ཟླ་༨"),tsc(u"ཟླ་༩"),tsc(u"ཟླ་༡༠"),tsc(u"ཟླ་༡༡"),tsc(u"ཟླ་༡༢")},.mon={tsc(u"ཟླ་བ་དང་པ་"),tsc(u"ཟླ་བ་གཉིས་པ་"),tsc(u"ཟླ་བ་གསུམ་པ་"),tsc(u"ཟླ་བ་བཞི་པ་"),tsc(u"ཟླ་བ་ལྔ་ཕ་"),tsc(u"ཟླ་བ་དྲུག་པ་"),tsc(u"ཟླ་བ་བདུནཔ་"),tsc(u"ཟླ་བ་བརྒྱད་པ་"),tsc(u"ཟླ་བ་དགུ་པ་"),tsc(u"ཟླ་བ་བཅུ་པ་"),tsc(u"ཟླ་བ་བཅུ་གཅིག་པ་"),tsc(u"ཟླ་བ་བཅུ་གཉིས་པ་")},.d_t_fmt=tsc(u"པསྱི་ལོ%yཟལ%mཚེས%dཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.d_fmt=tsc(u"པསྱི་ལོ%yཟལ%mཚེས%d"),.t_fmt=tsc(u"ཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.t_fmt_ampm=tsc(u"ཆུ་ཚོད%Iཀསར་མ%Mཀསར་ཆ%S %p"),.date_fmt=tsc(u"པསྱི་ལོ%yཟལ%mཚེས%dཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.am_pm={tsc(u"ངས་ཆ"),tsc(u"ཕྱི་ཆ")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u"^[+1yYཨ]"),.noexpr=tsc(u"^[-0nNམ]"),.yesstr=tsc(u"ཨིན་"),.nostr=tsc(u"མེན་")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"975")},.name={.name_fmt=tsc(u"%p%t%g%t%m%t%f"),.name_gen=tsc(u""),.name_miss=tsc(u"མོ"),.name_mr=tsc(u"ཕོ"),.name_mrs=tsc(u"ཨམ")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%r%t%e%t%b%N%h%t%s%N%T%N%S%N%z%c%N"),.country_name=tsc(u"འབྲུག"),.country_ab2=tsc(u"BT"),.country_ab3=tsc(u"BTN"),.country_num=64,.country_car=tsc(u"BHT"),.lang_name=tsc(u"རྫོང་ཁ"),.lang_ab=tsc(u"dz"),.lang_term=tsc(u"dzo"),.lang_lib=tsc(u"dzo")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"dz_BT"),.title=tsc(U"Dzongkha language locale for Bhutan"),.source=tsc(U"Sherubtse College\t\t;\t\tfast_io"),.address=tsc(U"Kanglung, Bhutan\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Dzongkha"),.territory=tsc(U"Bhutan"),.revision=tsc(U"0.3"),.date=tsc(U"2004-09-03")},.monetary={.int_curr_symbol=tsc(U"BTN "),.currency_symbol=tsc(U"Nu."),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,2},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=3,.frac_digits=3,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(U"ཟླ་"),tsc(U"མིར་"),tsc(U"ལྷག་"),tsc(U"པུར་"),tsc(U"སངས་"),tsc(U"སྤེན་"),tsc(U"ཉི་")},.day={tsc(U"གཟའ་ཟླ་བ་"),tsc(U"གཟའ་མིག་དམར་"),tsc(U"གཟའ་ལྷག་ཕ་"),tsc(U"གཟའ་པུར་བུ་"),tsc(U"གཟའ་པ་སངས་"),tsc(U"གཟའ་སྤེན་ཕ་"),tsc(U"གཟའ་ཉི་མ་")},.abmon={tsc(U"ཟླ་༡"),tsc(U"ཟླ་༢"),tsc(U"ཟླ་༣"),tsc(U"ཟླ་༤"),tsc(U"ཟླ་༥"),tsc(U"ཟླ་༦"),tsc(U"ཟླ་༧"),tsc(U"ཟླ་༨"),tsc(U"ཟླ་༩"),tsc(U"ཟླ་༡༠"),tsc(U"ཟླ་༡༡"),tsc(U"ཟླ་༡༢")},.mon={tsc(U"ཟླ་བ་དང་པ་"),tsc(U"ཟླ་བ་གཉིས་པ་"),tsc(U"ཟླ་བ་གསུམ་པ་"),tsc(U"ཟླ་བ་བཞི་པ་"),tsc(U"ཟླ་བ་ལྔ་ཕ་"),tsc(U"ཟླ་བ་དྲུག་པ་"),tsc(U"ཟླ་བ་བདུནཔ་"),tsc(U"ཟླ་བ་བརྒྱད་པ་"),tsc(U"ཟླ་བ་དགུ་པ་"),tsc(U"ཟླ་བ་བཅུ་པ་"),tsc(U"ཟླ་བ་བཅུ་གཅིག་པ་"),tsc(U"ཟླ་བ་བཅུ་གཉིས་པ་")},.d_t_fmt=tsc(U"པསྱི་ལོ%yཟལ%mཚེས%dཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.d_fmt=tsc(U"པསྱི་ལོ%yཟལ%mཚེས%d"),.t_fmt=tsc(U"ཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.t_fmt_ampm=tsc(U"ཆུ་ཚོད%Iཀསར་མ%Mཀསར་ཆ%S %p"),.date_fmt=tsc(U"པསྱི་ལོ%yཟལ%mཚེས%dཆུ་ཚོད%Hཀསར་མ%Mཀསར་ཆ%S"),.am_pm={tsc(U"ངས་ཆ"),tsc(U"ཕྱི་ཆ")},.week={7,19971130,1}},.messages={.yesexpr=tsc(U"^[+1yYཨ]"),.noexpr=tsc(U"^[-0nNམ]"),.yesstr=tsc(U"ཨིན་"),.nostr=tsc(U"མེན་")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"975")},.name={.name_fmt=tsc(U"%p%t%g%t%m%t%f"),.name_gen=tsc(U""),.name_miss=tsc(U"མོ"),.name_mr=tsc(U"ཕོ"),.name_mrs=tsc(U"ཨམ")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%r%t%e%t%b%N%h%t%s%N%T%N%S%N%z%c%N"),.country_name=tsc(U"འབྲུག"),.country_ab2=tsc(U"BT"),.country_ab3=tsc(U"BTN"),.country_num=64,.country_car=tsc(U"BHT"),.lang_name=tsc(U"རྫོང་ཁ"),.lang_ab=tsc(U"dz"),.lang_term=tsc(U"dzo"),.lang_lib=tsc(U"dzo")},.measurement={.measurement=1}};


}
}

#include"../main.h"