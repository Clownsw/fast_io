﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t monetary_mon_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("tig_ER"),.title=tsc("Tigre language locale for Eritrea"),.source=tsc("Ge'ez Frontier Foundation\t\t;\t\tfast_io"),.address=tsc("7802 Solomon Seal Dr., Springfield, VA 22152, USA\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("fast_io"),.email=tsc("locales@geez.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Tigre"),.territory=tsc("Eritrea"),.revision=tsc("0.20"),.date=tsc("2003-07-05")},.monetary={.int_curr_symbol=tsc("ERN "),.currency_symbol=tsc("Nfk"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc("")},.time={.abday={tsc("ሰ//ዓ"),tsc("ሰኖ "),tsc("ታላሸ"),tsc("ኣረር"),tsc("ከሚሽ"),tsc("ጅምዓ"),tsc("ሰ//ን")},.day={tsc("ሰንበት ዓባይ"),tsc("ሰኖ"),tsc("ታላሸኖ"),tsc("ኣረርባዓ"),tsc("ከሚሽ"),tsc("ጅምዓት"),tsc("ሰንበት ንኢሽ")},.abmon={tsc("ጥሪ "),tsc("ለካቲ"),tsc("መጋቢ"),tsc("ሚያዝ"),tsc("ግንቦ"),tsc("ሰነ "),tsc("ሓምለ"),tsc("ነሓሰ"),tsc("መስከ"),tsc("ጥቅም"),tsc("ሕዳር"),tsc("ታሕሳ")},.mon={tsc("ጥሪ"),tsc("ለካቲት"),tsc("መጋቢት"),tsc("ሚያዝያ"),tsc("ግንቦት"),tsc("ሰነ"),tsc("ሓምለ"),tsc("ነሓሰ"),tsc("መስከረም"),tsc("ጥቅምቲ"),tsc("ሕዳር"),tsc("ታሕሳስ")},.d_t_fmt=tsc("%A፡ %B %e ዮም %Y %r %Z"),.d_fmt=tsc("%d//%m//%Y"),.t_fmt=tsc("%l:%M:%S %p"),.t_fmt_ampm=tsc("%l:%M:%S %p"),.date_fmt=tsc("%A፡ %B %e ዮም %r %Z %Y ዓ//ም"),.am_pm={tsc("ቀደም ሰር ምዕል"),tsc("ሓቆ ሰር ምዕል")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yYእ]"),.noexpr=tsc("^[-0nNነ]"),.yesstr=tsc("እወ"),.nostr=tsc("ነኖእ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("%a-%l"),.int_select=tsc("00"),.int_prefix=tsc("291")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_gen=tsc(""),.name_miss=tsc("ወ//ሪት"),.name_mr=tsc("ኣቶ"),.name_mrs=tsc("ወ//ሮ"),.name_ms=tsc("ወ//ሪት")},.address={.postal_fmt=tsc("%z%c%T%s%b%e%r"),.country_name=tsc("ኤርትራ"),.country_post=tsc("ERI"),.country_ab2=tsc("ER"),.country_ab3=tsc("ERI"),.country_num=232,.country_car=tsc("ER"),.lang_name=tsc("ትግረ"),.lang_ab=tsc(""),.lang_term=tsc("tig"),.lang_lib=tsc("tig")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"tig_ER"),.title=tsc(L"Tigre language locale for Eritrea"),.source=tsc(L"Ge'ez Frontier Foundation\t\t;\t\tfast_io"),.address=tsc(L"7802 Solomon Seal Dr., Springfield, VA 22152, USA\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"locales@geez.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Tigre"),.territory=tsc(L"Eritrea"),.revision=tsc(L"0.20"),.date=tsc(L"2003-07-05")},.monetary={.int_curr_symbol=tsc(L"ERN "),.currency_symbol=tsc(L"Nfk"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L"")},.time={.abday={tsc(L"ሰ//ዓ"),tsc(L"ሰኖ "),tsc(L"ታላሸ"),tsc(L"ኣረር"),tsc(L"ከሚሽ"),tsc(L"ጅምዓ"),tsc(L"ሰ//ን")},.day={tsc(L"ሰንበት ዓባይ"),tsc(L"ሰኖ"),tsc(L"ታላሸኖ"),tsc(L"ኣረርባዓ"),tsc(L"ከሚሽ"),tsc(L"ጅምዓት"),tsc(L"ሰንበት ንኢሽ")},.abmon={tsc(L"ጥሪ "),tsc(L"ለካቲ"),tsc(L"መጋቢ"),tsc(L"ሚያዝ"),tsc(L"ግንቦ"),tsc(L"ሰነ "),tsc(L"ሓምለ"),tsc(L"ነሓሰ"),tsc(L"መስከ"),tsc(L"ጥቅም"),tsc(L"ሕዳር"),tsc(L"ታሕሳ")},.mon={tsc(L"ጥሪ"),tsc(L"ለካቲት"),tsc(L"መጋቢት"),tsc(L"ሚያዝያ"),tsc(L"ግንቦት"),tsc(L"ሰነ"),tsc(L"ሓምለ"),tsc(L"ነሓሰ"),tsc(L"መስከረም"),tsc(L"ጥቅምቲ"),tsc(L"ሕዳር"),tsc(L"ታሕሳስ")},.d_t_fmt=tsc(L"%A፡ %B %e ዮም %Y %r %Z"),.d_fmt=tsc(L"%d//%m//%Y"),.t_fmt=tsc(L"%l:%M:%S %p"),.t_fmt_ampm=tsc(L"%l:%M:%S %p"),.date_fmt=tsc(L"%A፡ %B %e ዮም %r %Z %Y ዓ//ም"),.am_pm={tsc(L"ቀደም ሰር ምዕል"),tsc(L"ሓቆ ሰር ምዕል")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yYእ]"),.noexpr=tsc(L"^[-0nNነ]"),.yesstr=tsc(L"እወ"),.nostr=tsc(L"ነኖእ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"%a-%l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"291")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_gen=tsc(L""),.name_miss=tsc(L"ወ//ሪት"),.name_mr=tsc(L"ኣቶ"),.name_mrs=tsc(L"ወ//ሮ"),.name_ms=tsc(L"ወ//ሪት")},.address={.postal_fmt=tsc(L"%z%c%T%s%b%e%r"),.country_name=tsc(L"ኤርትራ"),.country_post=tsc(L"ERI"),.country_ab2=tsc(L"ER"),.country_ab3=tsc(L"ERI"),.country_num=232,.country_car=tsc(L"ER"),.lang_name=tsc(L"ትግረ"),.lang_ab=tsc(L""),.lang_term=tsc(L"tig"),.lang_lib=tsc(L"tig")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"tig_ER"),.title=tsc(u8"Tigre language locale for Eritrea"),.source=tsc(u8"Ge'ez Frontier Foundation\t\t;\t\tfast_io"),.address=tsc(u8"7802 Solomon Seal Dr., Springfield, VA 22152, USA\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"locales@geez.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Tigre"),.territory=tsc(u8"Eritrea"),.revision=tsc(u8"0.20"),.date=tsc(u8"2003-07-05")},.monetary={.int_curr_symbol=tsc(u8"ERN "),.currency_symbol=tsc(u8"Nfk"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8"")},.time={.abday={tsc(u8"ሰ//ዓ"),tsc(u8"ሰኖ "),tsc(u8"ታላሸ"),tsc(u8"ኣረር"),tsc(u8"ከሚሽ"),tsc(u8"ጅምዓ"),tsc(u8"ሰ//ን")},.day={tsc(u8"ሰንበት ዓባይ"),tsc(u8"ሰኖ"),tsc(u8"ታላሸኖ"),tsc(u8"ኣረርባዓ"),tsc(u8"ከሚሽ"),tsc(u8"ጅምዓት"),tsc(u8"ሰንበት ንኢሽ")},.abmon={tsc(u8"ጥሪ "),tsc(u8"ለካቲ"),tsc(u8"መጋቢ"),tsc(u8"ሚያዝ"),tsc(u8"ግንቦ"),tsc(u8"ሰነ "),tsc(u8"ሓምለ"),tsc(u8"ነሓሰ"),tsc(u8"መስከ"),tsc(u8"ጥቅም"),tsc(u8"ሕዳር"),tsc(u8"ታሕሳ")},.mon={tsc(u8"ጥሪ"),tsc(u8"ለካቲት"),tsc(u8"መጋቢት"),tsc(u8"ሚያዝያ"),tsc(u8"ግንቦት"),tsc(u8"ሰነ"),tsc(u8"ሓምለ"),tsc(u8"ነሓሰ"),tsc(u8"መስከረም"),tsc(u8"ጥቅምቲ"),tsc(u8"ሕዳር"),tsc(u8"ታሕሳስ")},.d_t_fmt=tsc(u8"%A፡ %B %e ዮም %Y %r %Z"),.d_fmt=tsc(u8"%d//%m//%Y"),.t_fmt=tsc(u8"%l:%M:%S %p"),.t_fmt_ampm=tsc(u8"%l:%M:%S %p"),.date_fmt=tsc(u8"%A፡ %B %e ዮም %r %Z %Y ዓ//ም"),.am_pm={tsc(u8"ቀደም ሰር ምዕል"),tsc(u8"ሓቆ ሰር ምዕል")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yYእ]"),.noexpr=tsc(u8"^[-0nNነ]"),.yesstr=tsc(u8"እወ"),.nostr=tsc(u8"ነኖእ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"%a-%l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"291")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_gen=tsc(u8""),.name_miss=tsc(u8"ወ//ሪት"),.name_mr=tsc(u8"ኣቶ"),.name_mrs=tsc(u8"ወ//ሮ"),.name_ms=tsc(u8"ወ//ሪት")},.address={.postal_fmt=tsc(u8"%z%c%T%s%b%e%r"),.country_name=tsc(u8"ኤርትራ"),.country_post=tsc(u8"ERI"),.country_ab2=tsc(u8"ER"),.country_ab3=tsc(u8"ERI"),.country_num=232,.country_car=tsc(u8"ER"),.lang_name=tsc(u8"ትግረ"),.lang_ab=tsc(u8""),.lang_term=tsc(u8"tig"),.lang_lib=tsc(u8"tig")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"tig_ER"),.title=tsc(u"Tigre language locale for Eritrea"),.source=tsc(u"Ge'ez Frontier Foundation\t\t;\t\tfast_io"),.address=tsc(u"7802 Solomon Seal Dr., Springfield, VA 22152, USA\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"locales@geez.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Tigre"),.territory=tsc(u"Eritrea"),.revision=tsc(u"0.20"),.date=tsc(u"2003-07-05")},.monetary={.int_curr_symbol=tsc(u"ERN "),.currency_symbol=tsc(u"Nfk"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u"")},.time={.abday={tsc(u"ሰ//ዓ"),tsc(u"ሰኖ "),tsc(u"ታላሸ"),tsc(u"ኣረር"),tsc(u"ከሚሽ"),tsc(u"ጅምዓ"),tsc(u"ሰ//ን")},.day={tsc(u"ሰንበት ዓባይ"),tsc(u"ሰኖ"),tsc(u"ታላሸኖ"),tsc(u"ኣረርባዓ"),tsc(u"ከሚሽ"),tsc(u"ጅምዓት"),tsc(u"ሰንበት ንኢሽ")},.abmon={tsc(u"ጥሪ "),tsc(u"ለካቲ"),tsc(u"መጋቢ"),tsc(u"ሚያዝ"),tsc(u"ግንቦ"),tsc(u"ሰነ "),tsc(u"ሓምለ"),tsc(u"ነሓሰ"),tsc(u"መስከ"),tsc(u"ጥቅም"),tsc(u"ሕዳር"),tsc(u"ታሕሳ")},.mon={tsc(u"ጥሪ"),tsc(u"ለካቲት"),tsc(u"መጋቢት"),tsc(u"ሚያዝያ"),tsc(u"ግንቦት"),tsc(u"ሰነ"),tsc(u"ሓምለ"),tsc(u"ነሓሰ"),tsc(u"መስከረም"),tsc(u"ጥቅምቲ"),tsc(u"ሕዳር"),tsc(u"ታሕሳስ")},.d_t_fmt=tsc(u"%A፡ %B %e ዮም %Y %r %Z"),.d_fmt=tsc(u"%d//%m//%Y"),.t_fmt=tsc(u"%l:%M:%S %p"),.t_fmt_ampm=tsc(u"%l:%M:%S %p"),.date_fmt=tsc(u"%A፡ %B %e ዮም %r %Z %Y ዓ//ም"),.am_pm={tsc(u"ቀደም ሰር ምዕል"),tsc(u"ሓቆ ሰር ምዕል")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yYእ]"),.noexpr=tsc(u"^[-0nNነ]"),.yesstr=tsc(u"እወ"),.nostr=tsc(u"ነኖእ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"%a-%l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"291")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_gen=tsc(u""),.name_miss=tsc(u"ወ//ሪት"),.name_mr=tsc(u"ኣቶ"),.name_mrs=tsc(u"ወ//ሮ"),.name_ms=tsc(u"ወ//ሪት")},.address={.postal_fmt=tsc(u"%z%c%T%s%b%e%r"),.country_name=tsc(u"ኤርትራ"),.country_post=tsc(u"ERI"),.country_ab2=tsc(u"ER"),.country_ab3=tsc(u"ERI"),.country_num=232,.country_car=tsc(u"ER"),.lang_name=tsc(u"ትግረ"),.lang_ab=tsc(u""),.lang_term=tsc(u"tig"),.lang_lib=tsc(u"tig")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"tig_ER"),.title=tsc(U"Tigre language locale for Eritrea"),.source=tsc(U"Ge'ez Frontier Foundation\t\t;\t\tfast_io"),.address=tsc(U"7802 Solomon Seal Dr., Springfield, VA 22152, USA\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"locales@geez.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Tigre"),.territory=tsc(U"Eritrea"),.revision=tsc(U"0.20"),.date=tsc(U"2003-07-05")},.monetary={.int_curr_symbol=tsc(U"ERN "),.currency_symbol=tsc(U"Nfk"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={monetary_mon_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U"")},.time={.abday={tsc(U"ሰ//ዓ"),tsc(U"ሰኖ "),tsc(U"ታላሸ"),tsc(U"ኣረር"),tsc(U"ከሚሽ"),tsc(U"ጅምዓ"),tsc(U"ሰ//ን")},.day={tsc(U"ሰንበት ዓባይ"),tsc(U"ሰኖ"),tsc(U"ታላሸኖ"),tsc(U"ኣረርባዓ"),tsc(U"ከሚሽ"),tsc(U"ጅምዓት"),tsc(U"ሰንበት ንኢሽ")},.abmon={tsc(U"ጥሪ "),tsc(U"ለካቲ"),tsc(U"መጋቢ"),tsc(U"ሚያዝ"),tsc(U"ግንቦ"),tsc(U"ሰነ "),tsc(U"ሓምለ"),tsc(U"ነሓሰ"),tsc(U"መስከ"),tsc(U"ጥቅም"),tsc(U"ሕዳር"),tsc(U"ታሕሳ")},.mon={tsc(U"ጥሪ"),tsc(U"ለካቲት"),tsc(U"መጋቢት"),tsc(U"ሚያዝያ"),tsc(U"ግንቦት"),tsc(U"ሰነ"),tsc(U"ሓምለ"),tsc(U"ነሓሰ"),tsc(U"መስከረም"),tsc(U"ጥቅምቲ"),tsc(U"ሕዳር"),tsc(U"ታሕሳስ")},.d_t_fmt=tsc(U"%A፡ %B %e ዮም %Y %r %Z"),.d_fmt=tsc(U"%d//%m//%Y"),.t_fmt=tsc(U"%l:%M:%S %p"),.t_fmt_ampm=tsc(U"%l:%M:%S %p"),.date_fmt=tsc(U"%A፡ %B %e ዮም %r %Z %Y ዓ//ም"),.am_pm={tsc(U"ቀደም ሰር ምዕል"),tsc(U"ሓቆ ሰር ምዕል")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yYእ]"),.noexpr=tsc(U"^[-0nNነ]"),.yesstr=tsc(U"እወ"),.nostr=tsc(U"ነኖእ")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"%a-%l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"291")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_gen=tsc(U""),.name_miss=tsc(U"ወ//ሪት"),.name_mr=tsc(U"ኣቶ"),.name_mrs=tsc(U"ወ//ሮ"),.name_ms=tsc(U"ወ//ሪት")},.address={.postal_fmt=tsc(U"%z%c%T%s%b%e%r"),.country_name=tsc(U"ኤርትራ"),.country_post=tsc(U"ERI"),.country_ab2=tsc(U"ER"),.country_ab3=tsc(U"ERI"),.country_num=232,.country_car=tsc(U"ER"),.lang_name=tsc(U"ትግረ"),.lang_ab=tsc(U""),.lang_term=tsc(U"tig"),.lang_lib=tsc(U"tig")},.measurement={.measurement=1}};


}
}

#include"../main.h"