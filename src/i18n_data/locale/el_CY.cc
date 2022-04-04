﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t monetary_mon_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("el_CY"),.title=tsc("Greek locale for Cyprus"),.source=tsc("Greek Debian Translation Team\t\t;\t\tfast_io"),.address=tsc("Konstantinos Margaritis, M. Asias 50, Nafplion 21100, Greece\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("fast_io"),.email=tsc("bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Greek"),.territory=tsc("Cyprus"),.revision=tsc("1.0"),.date=tsc("2004-10-20")},.monetary={.int_curr_symbol=tsc("EUR "),.currency_symbol=tsc("€"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc(".")},.time={.abday={tsc("Κυρ"),tsc("Δευ"),tsc("Τρι"),tsc("Τετ"),tsc("Πεμ"),tsc("Παρ"),tsc("Σαβ")},.day={tsc("Κυριακή"),tsc("Δευτέρα"),tsc("Τρίτη"),tsc("Τετάρτη"),tsc("Πέμπτη"),tsc("Παρασκευή"),tsc("Σάββατο")},.abmon={tsc("Ιαν"),tsc("Φεβ"),tsc("Μαρ"),tsc("Απρ"),tsc("Μαΐ"),tsc("Ιουν"),tsc("Ιουλ"),tsc("Αυγ"),tsc("Σεπ"),tsc("Οκτ"),tsc("Νοε"),tsc("Δεκ")},.ab_alt_mon={tsc("Ιαν"),tsc("Φεβ"),tsc("Μάρ"),tsc("Απρ"),tsc("Μάι"),tsc("Ιούν"),tsc("Ιούλ"),tsc("Αύγ"),tsc("Σεπ"),tsc("Οκτ"),tsc("Νοέ"),tsc("Δεκ")},.mon={tsc("Ιανουαρίου"),tsc("Φεβρουαρίου"),tsc("Μαρτίου"),tsc("Απριλίου"),tsc("Μαΐου"),tsc("Ιουνίου"),tsc("Ιουλίου"),tsc("Αυγούστου"),tsc("Σεπτεμβρίου"),tsc("Οκτωβρίου"),tsc("Νοεμβρίου"),tsc("Δεκεμβρίου")},.d_t_fmt=tsc("%a %d %b %Y %r %Z"),.d_fmt=tsc("%d//%m//%Y"),.t_fmt=tsc("%r"),.t_fmt_ampm=tsc("%I:%M:%S %p"),.date_fmt=tsc("%a %d %b %Y %r %Z"),.am_pm={tsc("πμ"),tsc("μμ")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yYνΝ]"),.noexpr=tsc("^[-0nNοΟόΌ]"),.yesstr=tsc("ναι"),.nostr=tsc("όχι")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("357")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Κύπρος"),.country_ab2=tsc("CY"),.country_ab3=tsc("CYP"),.country_num=196,.country_car=tsc("CY"),.lang_name=tsc("Ελληνικά"),.lang_ab=tsc("el"),.lang_term=tsc("ell"),.lang_lib=tsc("gre")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"el_CY"),.title=tsc(L"Greek locale for Cyprus"),.source=tsc(L"Greek Debian Translation Team\t\t;\t\tfast_io"),.address=tsc(L"Konstantinos Margaritis, M. Asias 50, Nafplion 21100, Greece\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Greek"),.territory=tsc(L"Cyprus"),.revision=tsc(L"1.0"),.date=tsc(L"2004-10-20")},.monetary={.int_curr_symbol=tsc(L"EUR "),.currency_symbol=tsc(L"€"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L".")},.time={.abday={tsc(L"Κυρ"),tsc(L"Δευ"),tsc(L"Τρι"),tsc(L"Τετ"),tsc(L"Πεμ"),tsc(L"Παρ"),tsc(L"Σαβ")},.day={tsc(L"Κυριακή"),tsc(L"Δευτέρα"),tsc(L"Τρίτη"),tsc(L"Τετάρτη"),tsc(L"Πέμπτη"),tsc(L"Παρασκευή"),tsc(L"Σάββατο")},.abmon={tsc(L"Ιαν"),tsc(L"Φεβ"),tsc(L"Μαρ"),tsc(L"Απρ"),tsc(L"Μαΐ"),tsc(L"Ιουν"),tsc(L"Ιουλ"),tsc(L"Αυγ"),tsc(L"Σεπ"),tsc(L"Οκτ"),tsc(L"Νοε"),tsc(L"Δεκ")},.ab_alt_mon={tsc(L"Ιαν"),tsc(L"Φεβ"),tsc(L"Μάρ"),tsc(L"Απρ"),tsc(L"Μάι"),tsc(L"Ιούν"),tsc(L"Ιούλ"),tsc(L"Αύγ"),tsc(L"Σεπ"),tsc(L"Οκτ"),tsc(L"Νοέ"),tsc(L"Δεκ")},.mon={tsc(L"Ιανουαρίου"),tsc(L"Φεβρουαρίου"),tsc(L"Μαρτίου"),tsc(L"Απριλίου"),tsc(L"Μαΐου"),tsc(L"Ιουνίου"),tsc(L"Ιουλίου"),tsc(L"Αυγούστου"),tsc(L"Σεπτεμβρίου"),tsc(L"Οκτωβρίου"),tsc(L"Νοεμβρίου"),tsc(L"Δεκεμβρίου")},.d_t_fmt=tsc(L"%a %d %b %Y %r %Z"),.d_fmt=tsc(L"%d//%m//%Y"),.t_fmt=tsc(L"%r"),.t_fmt_ampm=tsc(L"%I:%M:%S %p"),.date_fmt=tsc(L"%a %d %b %Y %r %Z"),.am_pm={tsc(L"πμ"),tsc(L"μμ")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yYνΝ]"),.noexpr=tsc(L"^[-0nNοΟόΌ]"),.yesstr=tsc(L"ναι"),.nostr=tsc(L"όχι")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"357")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Κύπρος"),.country_ab2=tsc(L"CY"),.country_ab3=tsc(L"CYP"),.country_num=196,.country_car=tsc(L"CY"),.lang_name=tsc(L"Ελληνικά"),.lang_ab=tsc(L"el"),.lang_term=tsc(L"ell"),.lang_lib=tsc(L"gre")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"el_CY"),.title=tsc(u8"Greek locale for Cyprus"),.source=tsc(u8"Greek Debian Translation Team\t\t;\t\tfast_io"),.address=tsc(u8"Konstantinos Margaritis, M. Asias 50, Nafplion 21100, Greece\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Greek"),.territory=tsc(u8"Cyprus"),.revision=tsc(u8"1.0"),.date=tsc(u8"2004-10-20")},.monetary={.int_curr_symbol=tsc(u8"EUR "),.currency_symbol=tsc(u8"€"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8".")},.time={.abday={tsc(u8"Κυρ"),tsc(u8"Δευ"),tsc(u8"Τρι"),tsc(u8"Τετ"),tsc(u8"Πεμ"),tsc(u8"Παρ"),tsc(u8"Σαβ")},.day={tsc(u8"Κυριακή"),tsc(u8"Δευτέρα"),tsc(u8"Τρίτη"),tsc(u8"Τετάρτη"),tsc(u8"Πέμπτη"),tsc(u8"Παρασκευή"),tsc(u8"Σάββατο")},.abmon={tsc(u8"Ιαν"),tsc(u8"Φεβ"),tsc(u8"Μαρ"),tsc(u8"Απρ"),tsc(u8"Μαΐ"),tsc(u8"Ιουν"),tsc(u8"Ιουλ"),tsc(u8"Αυγ"),tsc(u8"Σεπ"),tsc(u8"Οκτ"),tsc(u8"Νοε"),tsc(u8"Δεκ")},.ab_alt_mon={tsc(u8"Ιαν"),tsc(u8"Φεβ"),tsc(u8"Μάρ"),tsc(u8"Απρ"),tsc(u8"Μάι"),tsc(u8"Ιούν"),tsc(u8"Ιούλ"),tsc(u8"Αύγ"),tsc(u8"Σεπ"),tsc(u8"Οκτ"),tsc(u8"Νοέ"),tsc(u8"Δεκ")},.mon={tsc(u8"Ιανουαρίου"),tsc(u8"Φεβρουαρίου"),tsc(u8"Μαρτίου"),tsc(u8"Απριλίου"),tsc(u8"Μαΐου"),tsc(u8"Ιουνίου"),tsc(u8"Ιουλίου"),tsc(u8"Αυγούστου"),tsc(u8"Σεπτεμβρίου"),tsc(u8"Οκτωβρίου"),tsc(u8"Νοεμβρίου"),tsc(u8"Δεκεμβρίου")},.d_t_fmt=tsc(u8"%a %d %b %Y %r %Z"),.d_fmt=tsc(u8"%d//%m//%Y"),.t_fmt=tsc(u8"%r"),.t_fmt_ampm=tsc(u8"%I:%M:%S %p"),.date_fmt=tsc(u8"%a %d %b %Y %r %Z"),.am_pm={tsc(u8"πμ"),tsc(u8"μμ")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yYνΝ]"),.noexpr=tsc(u8"^[-0nNοΟόΌ]"),.yesstr=tsc(u8"ναι"),.nostr=tsc(u8"όχι")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"357")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Κύπρος"),.country_ab2=tsc(u8"CY"),.country_ab3=tsc(u8"CYP"),.country_num=196,.country_car=tsc(u8"CY"),.lang_name=tsc(u8"Ελληνικά"),.lang_ab=tsc(u8"el"),.lang_term=tsc(u8"ell"),.lang_lib=tsc(u8"gre")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"el_CY"),.title=tsc(u"Greek locale for Cyprus"),.source=tsc(u"Greek Debian Translation Team\t\t;\t\tfast_io"),.address=tsc(u"Konstantinos Margaritis, M. Asias 50, Nafplion 21100, Greece\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Greek"),.territory=tsc(u"Cyprus"),.revision=tsc(u"1.0"),.date=tsc(u"2004-10-20")},.monetary={.int_curr_symbol=tsc(u"EUR "),.currency_symbol=tsc(u"€"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u".")},.time={.abday={tsc(u"Κυρ"),tsc(u"Δευ"),tsc(u"Τρι"),tsc(u"Τετ"),tsc(u"Πεμ"),tsc(u"Παρ"),tsc(u"Σαβ")},.day={tsc(u"Κυριακή"),tsc(u"Δευτέρα"),tsc(u"Τρίτη"),tsc(u"Τετάρτη"),tsc(u"Πέμπτη"),tsc(u"Παρασκευή"),tsc(u"Σάββατο")},.abmon={tsc(u"Ιαν"),tsc(u"Φεβ"),tsc(u"Μαρ"),tsc(u"Απρ"),tsc(u"Μαΐ"),tsc(u"Ιουν"),tsc(u"Ιουλ"),tsc(u"Αυγ"),tsc(u"Σεπ"),tsc(u"Οκτ"),tsc(u"Νοε"),tsc(u"Δεκ")},.ab_alt_mon={tsc(u"Ιαν"),tsc(u"Φεβ"),tsc(u"Μάρ"),tsc(u"Απρ"),tsc(u"Μάι"),tsc(u"Ιούν"),tsc(u"Ιούλ"),tsc(u"Αύγ"),tsc(u"Σεπ"),tsc(u"Οκτ"),tsc(u"Νοέ"),tsc(u"Δεκ")},.mon={tsc(u"Ιανουαρίου"),tsc(u"Φεβρουαρίου"),tsc(u"Μαρτίου"),tsc(u"Απριλίου"),tsc(u"Μαΐου"),tsc(u"Ιουνίου"),tsc(u"Ιουλίου"),tsc(u"Αυγούστου"),tsc(u"Σεπτεμβρίου"),tsc(u"Οκτωβρίου"),tsc(u"Νοεμβρίου"),tsc(u"Δεκεμβρίου")},.d_t_fmt=tsc(u"%a %d %b %Y %r %Z"),.d_fmt=tsc(u"%d//%m//%Y"),.t_fmt=tsc(u"%r"),.t_fmt_ampm=tsc(u"%I:%M:%S %p"),.date_fmt=tsc(u"%a %d %b %Y %r %Z"),.am_pm={tsc(u"πμ"),tsc(u"μμ")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yYνΝ]"),.noexpr=tsc(u"^[-0nNοΟόΌ]"),.yesstr=tsc(u"ναι"),.nostr=tsc(u"όχι")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"357")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Κύπρος"),.country_ab2=tsc(u"CY"),.country_ab3=tsc(u"CYP"),.country_num=196,.country_car=tsc(u"CY"),.lang_name=tsc(u"Ελληνικά"),.lang_ab=tsc(u"el"),.lang_term=tsc(u"ell"),.lang_lib=tsc(u"gre")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"el_CY"),.title=tsc(U"Greek locale for Cyprus"),.source=tsc(U"Greek Debian Translation Team\t\t;\t\tfast_io"),.address=tsc(U"Konstantinos Margaritis, M. Asias 50, Nafplion 21100, Greece\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"bug-glibc@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Greek"),.territory=tsc(U"Cyprus"),.revision=tsc(U"1.0"),.date=tsc(U"2004-10-20")},.monetary={.int_curr_symbol=tsc(U"EUR "),.currency_symbol=tsc(U"€"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=0,.n_cs_precedes=0,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U".")},.time={.abday={tsc(U"Κυρ"),tsc(U"Δευ"),tsc(U"Τρι"),tsc(U"Τετ"),tsc(U"Πεμ"),tsc(U"Παρ"),tsc(U"Σαβ")},.day={tsc(U"Κυριακή"),tsc(U"Δευτέρα"),tsc(U"Τρίτη"),tsc(U"Τετάρτη"),tsc(U"Πέμπτη"),tsc(U"Παρασκευή"),tsc(U"Σάββατο")},.abmon={tsc(U"Ιαν"),tsc(U"Φεβ"),tsc(U"Μαρ"),tsc(U"Απρ"),tsc(U"Μαΐ"),tsc(U"Ιουν"),tsc(U"Ιουλ"),tsc(U"Αυγ"),tsc(U"Σεπ"),tsc(U"Οκτ"),tsc(U"Νοε"),tsc(U"Δεκ")},.ab_alt_mon={tsc(U"Ιαν"),tsc(U"Φεβ"),tsc(U"Μάρ"),tsc(U"Απρ"),tsc(U"Μάι"),tsc(U"Ιούν"),tsc(U"Ιούλ"),tsc(U"Αύγ"),tsc(U"Σεπ"),tsc(U"Οκτ"),tsc(U"Νοέ"),tsc(U"Δεκ")},.mon={tsc(U"Ιανουαρίου"),tsc(U"Φεβρουαρίου"),tsc(U"Μαρτίου"),tsc(U"Απριλίου"),tsc(U"Μαΐου"),tsc(U"Ιουνίου"),tsc(U"Ιουλίου"),tsc(U"Αυγούστου"),tsc(U"Σεπτεμβρίου"),tsc(U"Οκτωβρίου"),tsc(U"Νοεμβρίου"),tsc(U"Δεκεμβρίου")},.d_t_fmt=tsc(U"%a %d %b %Y %r %Z"),.d_fmt=tsc(U"%d//%m//%Y"),.t_fmt=tsc(U"%r"),.t_fmt_ampm=tsc(U"%I:%M:%S %p"),.date_fmt=tsc(U"%a %d %b %Y %r %Z"),.am_pm={tsc(U"πμ"),tsc(U"μμ")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yYνΝ]"),.noexpr=tsc(U"^[-0nNοΟόΌ]"),.yesstr=tsc(U"ναι"),.nostr=tsc(U"όχι")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"357")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Κύπρος"),.country_ab2=tsc(U"CY"),.country_ab3=tsc(U"CYP"),.country_num=196,.country_car=tsc(U"CY"),.lang_name=tsc(U"Ελληνικά"),.lang_ab=tsc(U"el"),.lang_term=tsc(U"ell"),.lang_lib=tsc(U"gre")},.measurement={.measurement=1}};


}
}

#include"../main.h"