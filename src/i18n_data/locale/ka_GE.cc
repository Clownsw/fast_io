﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("ka_GE"),.title=tsc("Georgian language locale for Georgia"),.source=tsc("fast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc("srtxg@chanae.alphanet.ch;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Georgian"),.territory=tsc("Georgia"),.revision=tsc("0.6"),.date=tsc("2001-01-26")},.monetary={.int_curr_symbol=tsc("GEL "),.currency_symbol=tsc("₾"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("კვი"),tsc("ორშ"),tsc("სამ"),tsc("ოთხ"),tsc("ხუთ"),tsc("პარ"),tsc("შაბ")},.day={tsc("კვირა"),tsc("ორშაბათი"),tsc("სამშაბათი"),tsc("ოთხშაბათი"),tsc("ხუთშაბათი"),tsc("პარასკევი"),tsc("შაბათი")},.abmon={tsc("იან"),tsc("თებ"),tsc("მარ"),tsc("აპრ"),tsc("მაი"),tsc("ივნ"),tsc("ივლ"),tsc("აგვ"),tsc("სექ"),tsc("ოქტ"),tsc("ნოე"),tsc("დეკ")},.mon={tsc("იანვარი"),tsc("თებერვალი"),tsc("მარტი"),tsc("აპრილი"),tsc("მაისი"),tsc("ივნისი"),tsc("ივლისი"),tsc("აგვისტო"),tsc("სექტემბერი"),tsc("ოქტომბერი"),tsc("ნოემბერი"),tsc("დეკემბერი")},.d_t_fmt=tsc("%Y წლის %d %B, %T"),.d_fmt=tsc("%m//%d//%Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%Y წლის %d %B, %T %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yYkKxXკ]"),.noexpr=tsc("^[-0nNaAა]"),.yesstr=tsc("კი"),.nostr=tsc("არა")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("8~10"),.int_prefix=tsc("995")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%d%N%f%N%d%N%b%N%s %h 5e %r%N%C%z %T%N%c%N"),.country_name=tsc("საქართველო"),.country_ab2=tsc("GE"),.country_ab3=tsc("GEO"),.country_num=268,.country_car=tsc("GE"),.country_isbn=tsc("99928"),.lang_name=tsc("ქართული"),.lang_ab=tsc("ka"),.lang_term=tsc("kat"),.lang_lib=tsc("geo")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"ka_GE"),.title=tsc(L"Georgian language locale for Georgia"),.source=tsc(L"fast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(L"srtxg@chanae.alphanet.ch;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Georgian"),.territory=tsc(L"Georgia"),.revision=tsc(L"0.6"),.date=tsc(L"2001-01-26")},.monetary={.int_curr_symbol=tsc(L"GEL "),.currency_symbol=tsc(L"₾"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"კვი"),tsc(L"ორშ"),tsc(L"სამ"),tsc(L"ოთხ"),tsc(L"ხუთ"),tsc(L"პარ"),tsc(L"შაბ")},.day={tsc(L"კვირა"),tsc(L"ორშაბათი"),tsc(L"სამშაბათი"),tsc(L"ოთხშაბათი"),tsc(L"ხუთშაბათი"),tsc(L"პარასკევი"),tsc(L"შაბათი")},.abmon={tsc(L"იან"),tsc(L"თებ"),tsc(L"მარ"),tsc(L"აპრ"),tsc(L"მაი"),tsc(L"ივნ"),tsc(L"ივლ"),tsc(L"აგვ"),tsc(L"სექ"),tsc(L"ოქტ"),tsc(L"ნოე"),tsc(L"დეკ")},.mon={tsc(L"იანვარი"),tsc(L"თებერვალი"),tsc(L"მარტი"),tsc(L"აპრილი"),tsc(L"მაისი"),tsc(L"ივნისი"),tsc(L"ივლისი"),tsc(L"აგვისტო"),tsc(L"სექტემბერი"),tsc(L"ოქტომბერი"),tsc(L"ნოემბერი"),tsc(L"დეკემბერი")},.d_t_fmt=tsc(L"%Y წლის %d %B, %T"),.d_fmt=tsc(L"%m//%d//%Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%Y წლის %d %B, %T %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yYkKxXკ]"),.noexpr=tsc(L"^[-0nNaAა]"),.yesstr=tsc(L"კი"),.nostr=tsc(L"არა")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"8~10"),.int_prefix=tsc(L"995")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%d%N%f%N%d%N%b%N%s %h 5e %r%N%C%z %T%N%c%N"),.country_name=tsc(L"საქართველო"),.country_ab2=tsc(L"GE"),.country_ab3=tsc(L"GEO"),.country_num=268,.country_car=tsc(L"GE"),.country_isbn=tsc(L"99928"),.lang_name=tsc(L"ქართული"),.lang_ab=tsc(L"ka"),.lang_term=tsc(L"kat"),.lang_lib=tsc(L"geo")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"ka_GE"),.title=tsc(u8"Georgian language locale for Georgia"),.source=tsc(u8"fast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(u8"srtxg@chanae.alphanet.ch;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Georgian"),.territory=tsc(u8"Georgia"),.revision=tsc(u8"0.6"),.date=tsc(u8"2001-01-26")},.monetary={.int_curr_symbol=tsc(u8"GEL "),.currency_symbol=tsc(u8"₾"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"კვი"),tsc(u8"ორშ"),tsc(u8"სამ"),tsc(u8"ოთხ"),tsc(u8"ხუთ"),tsc(u8"პარ"),tsc(u8"შაბ")},.day={tsc(u8"კვირა"),tsc(u8"ორშაბათი"),tsc(u8"სამშაბათი"),tsc(u8"ოთხშაბათი"),tsc(u8"ხუთშაბათი"),tsc(u8"პარასკევი"),tsc(u8"შაბათი")},.abmon={tsc(u8"იან"),tsc(u8"თებ"),tsc(u8"მარ"),tsc(u8"აპრ"),tsc(u8"მაი"),tsc(u8"ივნ"),tsc(u8"ივლ"),tsc(u8"აგვ"),tsc(u8"სექ"),tsc(u8"ოქტ"),tsc(u8"ნოე"),tsc(u8"დეკ")},.mon={tsc(u8"იანვარი"),tsc(u8"თებერვალი"),tsc(u8"მარტი"),tsc(u8"აპრილი"),tsc(u8"მაისი"),tsc(u8"ივნისი"),tsc(u8"ივლისი"),tsc(u8"აგვისტო"),tsc(u8"სექტემბერი"),tsc(u8"ოქტომბერი"),tsc(u8"ნოემბერი"),tsc(u8"დეკემბერი")},.d_t_fmt=tsc(u8"%Y წლის %d %B, %T"),.d_fmt=tsc(u8"%m//%d//%Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%Y წლის %d %B, %T %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yYkKxXკ]"),.noexpr=tsc(u8"^[-0nNaAა]"),.yesstr=tsc(u8"კი"),.nostr=tsc(u8"არა")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"8~10"),.int_prefix=tsc(u8"995")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%d%N%f%N%d%N%b%N%s %h 5e %r%N%C%z %T%N%c%N"),.country_name=tsc(u8"საქართველო"),.country_ab2=tsc(u8"GE"),.country_ab3=tsc(u8"GEO"),.country_num=268,.country_car=tsc(u8"GE"),.country_isbn=tsc(u8"99928"),.lang_name=tsc(u8"ქართული"),.lang_ab=tsc(u8"ka"),.lang_term=tsc(u8"kat"),.lang_lib=tsc(u8"geo")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"ka_GE"),.title=tsc(u"Georgian language locale for Georgia"),.source=tsc(u"fast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(u"srtxg@chanae.alphanet.ch;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Georgian"),.territory=tsc(u"Georgia"),.revision=tsc(u"0.6"),.date=tsc(u"2001-01-26")},.monetary={.int_curr_symbol=tsc(u"GEL "),.currency_symbol=tsc(u"₾"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"კვი"),tsc(u"ორშ"),tsc(u"სამ"),tsc(u"ოთხ"),tsc(u"ხუთ"),tsc(u"პარ"),tsc(u"შაბ")},.day={tsc(u"კვირა"),tsc(u"ორშაბათი"),tsc(u"სამშაბათი"),tsc(u"ოთხშაბათი"),tsc(u"ხუთშაბათი"),tsc(u"პარასკევი"),tsc(u"შაბათი")},.abmon={tsc(u"იან"),tsc(u"თებ"),tsc(u"მარ"),tsc(u"აპრ"),tsc(u"მაი"),tsc(u"ივნ"),tsc(u"ივლ"),tsc(u"აგვ"),tsc(u"სექ"),tsc(u"ოქტ"),tsc(u"ნოე"),tsc(u"დეკ")},.mon={tsc(u"იანვარი"),tsc(u"თებერვალი"),tsc(u"მარტი"),tsc(u"აპრილი"),tsc(u"მაისი"),tsc(u"ივნისი"),tsc(u"ივლისი"),tsc(u"აგვისტო"),tsc(u"სექტემბერი"),tsc(u"ოქტომბერი"),tsc(u"ნოემბერი"),tsc(u"დეკემბერი")},.d_t_fmt=tsc(u"%Y წლის %d %B, %T"),.d_fmt=tsc(u"%m//%d//%Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%Y წლის %d %B, %T %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yYkKxXკ]"),.noexpr=tsc(u"^[-0nNaAა]"),.yesstr=tsc(u"კი"),.nostr=tsc(u"არა")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"8~10"),.int_prefix=tsc(u"995")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%d%N%f%N%d%N%b%N%s %h 5e %r%N%C%z %T%N%c%N"),.country_name=tsc(u"საქართველო"),.country_ab2=tsc(u"GE"),.country_ab3=tsc(u"GEO"),.country_num=268,.country_car=tsc(u"GE"),.country_isbn=tsc(u"99928"),.lang_name=tsc(u"ქართული"),.lang_ab=tsc(u"ka"),.lang_term=tsc(u"kat"),.lang_lib=tsc(u"geo")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"ka_GE"),.title=tsc(U"Georgian language locale for Georgia"),.source=tsc(U"fast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(U"srtxg@chanae.alphanet.ch;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Georgian"),.territory=tsc(U"Georgia"),.revision=tsc(U"0.6"),.date=tsc(U"2001-01-26")},.monetary={.int_curr_symbol=tsc(U"GEL "),.currency_symbol=tsc(U"₾"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"კვი"),tsc(U"ორშ"),tsc(U"სამ"),tsc(U"ოთხ"),tsc(U"ხუთ"),tsc(U"პარ"),tsc(U"შაბ")},.day={tsc(U"კვირა"),tsc(U"ორშაბათი"),tsc(U"სამშაბათი"),tsc(U"ოთხშაბათი"),tsc(U"ხუთშაბათი"),tsc(U"პარასკევი"),tsc(U"შაბათი")},.abmon={tsc(U"იან"),tsc(U"თებ"),tsc(U"მარ"),tsc(U"აპრ"),tsc(U"მაი"),tsc(U"ივნ"),tsc(U"ივლ"),tsc(U"აგვ"),tsc(U"სექ"),tsc(U"ოქტ"),tsc(U"ნოე"),tsc(U"დეკ")},.mon={tsc(U"იანვარი"),tsc(U"თებერვალი"),tsc(U"მარტი"),tsc(U"აპრილი"),tsc(U"მაისი"),tsc(U"ივნისი"),tsc(U"ივლისი"),tsc(U"აგვისტო"),tsc(U"სექტემბერი"),tsc(U"ოქტომბერი"),tsc(U"ნოემბერი"),tsc(U"დეკემბერი")},.d_t_fmt=tsc(U"%Y წლის %d %B, %T"),.d_fmt=tsc(U"%m//%d//%Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%Y წლის %d %B, %T %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yYkKxXკ]"),.noexpr=tsc(U"^[-0nNaAა]"),.yesstr=tsc(U"კი"),.nostr=tsc(U"არა")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"8~10"),.int_prefix=tsc(U"995")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%d%N%f%N%d%N%b%N%s %h 5e %r%N%C%z %T%N%c%N"),.country_name=tsc(U"საქართველო"),.country_ab2=tsc(U"GE"),.country_ab3=tsc(U"GEO"),.country_num=268,.country_car=tsc(U"GE"),.country_isbn=tsc(U"99928"),.lang_name=tsc(U"ქართული"),.lang_ab=tsc(U"ka"),.lang_term=tsc(U"kat"),.lang_lib=tsc(U"geo")},.measurement={.measurement=1}};


}
}

#include"../main.h"