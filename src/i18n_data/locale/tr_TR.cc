﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("tr_TR"),.title=tsc("Turkish locale for Turkey"),.source=tsc("RAP\t\t;\t\tfast_io"),.address=tsc("Sankt Jørgens Alle 8, DK-1615 København V, Danmark\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("fast_io"),.email=tsc("bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Turkish"),.territory=tsc("Turkey"),.revision=tsc("1.0"),.date=tsc("2020-06-25")},.monetary={.int_curr_symbol=tsc("TRY "),.currency_symbol=tsc("₺"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("Paz"),tsc("Pzt"),tsc("Sal"),tsc("Çrş"),tsc("Prş"),tsc("Cum"),tsc("Cts")},.day={tsc("Pazar"),tsc("Pazartesi"),tsc("Salı"),tsc("Çarşamba"),tsc("Perşembe"),tsc("Cuma"),tsc("Cumartesi")},.abmon={tsc("Oca"),tsc("Şub"),tsc("Mar"),tsc("Nis"),tsc("May"),tsc("Haz"),tsc("Tem"),tsc("Ağu"),tsc("Eyl"),tsc("Eki"),tsc("Kas"),tsc("Ara")},.mon={tsc("Ocak"),tsc("Şubat"),tsc("Mart"),tsc("Nisan"),tsc("Mayıs"),tsc("Haziran"),tsc("Temmuz"),tsc("Ağustos"),tsc("Eylül"),tsc("Ekim"),tsc("Kasım"),tsc("Aralık")},.d_t_fmt=tsc("%a %d %b %Y %T"),.d_fmt=tsc("%d-%m-%Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc("%I:%M:%S %p"),.date_fmt=tsc("%a %d %b %Y %T %Z"),.am_pm={tsc("ÖÖ"),tsc("ÖS")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yYeE]"),.noexpr=tsc("^[-0nNhH]"),.yesstr=tsc("evet"),.nostr=tsc("hayır")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("90")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f"),.name_gen=tsc("Sayın"),.name_miss=tsc("Bayan"),.name_mr=tsc("Bay"),.name_mrs=tsc("Bayan"),.name_ms=tsc("Bayan")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Türkiye"),.country_post=tsc("TR"),.country_ab2=tsc("TR"),.country_ab3=tsc("TUR"),.country_num=792,.country_car=tsc("TR"),.country_isbn=tsc("975"),.lang_name=tsc("Türkçe"),.lang_ab=tsc("tr"),.lang_term=tsc("tur"),.lang_lib=tsc("tur")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"tr_TR"),.title=tsc(L"Turkish locale for Turkey"),.source=tsc(L"RAP\t\t;\t\tfast_io"),.address=tsc(L"Sankt Jørgens Alle 8, DK-1615 København V, Danmark\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Turkish"),.territory=tsc(L"Turkey"),.revision=tsc(L"1.0"),.date=tsc(L"2020-06-25")},.monetary={.int_curr_symbol=tsc(L"TRY "),.currency_symbol=tsc(L"₺"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"Paz"),tsc(L"Pzt"),tsc(L"Sal"),tsc(L"Çrş"),tsc(L"Prş"),tsc(L"Cum"),tsc(L"Cts")},.day={tsc(L"Pazar"),tsc(L"Pazartesi"),tsc(L"Salı"),tsc(L"Çarşamba"),tsc(L"Perşembe"),tsc(L"Cuma"),tsc(L"Cumartesi")},.abmon={tsc(L"Oca"),tsc(L"Şub"),tsc(L"Mar"),tsc(L"Nis"),tsc(L"May"),tsc(L"Haz"),tsc(L"Tem"),tsc(L"Ağu"),tsc(L"Eyl"),tsc(L"Eki"),tsc(L"Kas"),tsc(L"Ara")},.mon={tsc(L"Ocak"),tsc(L"Şubat"),tsc(L"Mart"),tsc(L"Nisan"),tsc(L"Mayıs"),tsc(L"Haziran"),tsc(L"Temmuz"),tsc(L"Ağustos"),tsc(L"Eylül"),tsc(L"Ekim"),tsc(L"Kasım"),tsc(L"Aralık")},.d_t_fmt=tsc(L"%a %d %b %Y %T"),.d_fmt=tsc(L"%d-%m-%Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L"%I:%M:%S %p"),.date_fmt=tsc(L"%a %d %b %Y %T %Z"),.am_pm={tsc(L"ÖÖ"),tsc(L"ÖS")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yYeE]"),.noexpr=tsc(L"^[-0nNhH]"),.yesstr=tsc(L"evet"),.nostr=tsc(L"hayır")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"90")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f"),.name_gen=tsc(L"Sayın"),.name_miss=tsc(L"Bayan"),.name_mr=tsc(L"Bay"),.name_mrs=tsc(L"Bayan"),.name_ms=tsc(L"Bayan")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Türkiye"),.country_post=tsc(L"TR"),.country_ab2=tsc(L"TR"),.country_ab3=tsc(L"TUR"),.country_num=792,.country_car=tsc(L"TR"),.country_isbn=tsc(L"975"),.lang_name=tsc(L"Türkçe"),.lang_ab=tsc(L"tr"),.lang_term=tsc(L"tur"),.lang_lib=tsc(L"tur")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"tr_TR"),.title=tsc(u8"Turkish locale for Turkey"),.source=tsc(u8"RAP\t\t;\t\tfast_io"),.address=tsc(u8"Sankt Jørgens Alle 8, DK-1615 København V, Danmark\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Turkish"),.territory=tsc(u8"Turkey"),.revision=tsc(u8"1.0"),.date=tsc(u8"2020-06-25")},.monetary={.int_curr_symbol=tsc(u8"TRY "),.currency_symbol=tsc(u8"₺"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"Paz"),tsc(u8"Pzt"),tsc(u8"Sal"),tsc(u8"Çrş"),tsc(u8"Prş"),tsc(u8"Cum"),tsc(u8"Cts")},.day={tsc(u8"Pazar"),tsc(u8"Pazartesi"),tsc(u8"Salı"),tsc(u8"Çarşamba"),tsc(u8"Perşembe"),tsc(u8"Cuma"),tsc(u8"Cumartesi")},.abmon={tsc(u8"Oca"),tsc(u8"Şub"),tsc(u8"Mar"),tsc(u8"Nis"),tsc(u8"May"),tsc(u8"Haz"),tsc(u8"Tem"),tsc(u8"Ağu"),tsc(u8"Eyl"),tsc(u8"Eki"),tsc(u8"Kas"),tsc(u8"Ara")},.mon={tsc(u8"Ocak"),tsc(u8"Şubat"),tsc(u8"Mart"),tsc(u8"Nisan"),tsc(u8"Mayıs"),tsc(u8"Haziran"),tsc(u8"Temmuz"),tsc(u8"Ağustos"),tsc(u8"Eylül"),tsc(u8"Ekim"),tsc(u8"Kasım"),tsc(u8"Aralık")},.d_t_fmt=tsc(u8"%a %d %b %Y %T"),.d_fmt=tsc(u8"%d-%m-%Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8"%I:%M:%S %p"),.date_fmt=tsc(u8"%a %d %b %Y %T %Z"),.am_pm={tsc(u8"ÖÖ"),tsc(u8"ÖS")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yYeE]"),.noexpr=tsc(u8"^[-0nNhH]"),.yesstr=tsc(u8"evet"),.nostr=tsc(u8"hayır")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"90")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f"),.name_gen=tsc(u8"Sayın"),.name_miss=tsc(u8"Bayan"),.name_mr=tsc(u8"Bay"),.name_mrs=tsc(u8"Bayan"),.name_ms=tsc(u8"Bayan")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Türkiye"),.country_post=tsc(u8"TR"),.country_ab2=tsc(u8"TR"),.country_ab3=tsc(u8"TUR"),.country_num=792,.country_car=tsc(u8"TR"),.country_isbn=tsc(u8"975"),.lang_name=tsc(u8"Türkçe"),.lang_ab=tsc(u8"tr"),.lang_term=tsc(u8"tur"),.lang_lib=tsc(u8"tur")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"tr_TR"),.title=tsc(u"Turkish locale for Turkey"),.source=tsc(u"RAP\t\t;\t\tfast_io"),.address=tsc(u"Sankt Jørgens Alle 8, DK-1615 København V, Danmark\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Turkish"),.territory=tsc(u"Turkey"),.revision=tsc(u"1.0"),.date=tsc(u"2020-06-25")},.monetary={.int_curr_symbol=tsc(u"TRY "),.currency_symbol=tsc(u"₺"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"Paz"),tsc(u"Pzt"),tsc(u"Sal"),tsc(u"Çrş"),tsc(u"Prş"),tsc(u"Cum"),tsc(u"Cts")},.day={tsc(u"Pazar"),tsc(u"Pazartesi"),tsc(u"Salı"),tsc(u"Çarşamba"),tsc(u"Perşembe"),tsc(u"Cuma"),tsc(u"Cumartesi")},.abmon={tsc(u"Oca"),tsc(u"Şub"),tsc(u"Mar"),tsc(u"Nis"),tsc(u"May"),tsc(u"Haz"),tsc(u"Tem"),tsc(u"Ağu"),tsc(u"Eyl"),tsc(u"Eki"),tsc(u"Kas"),tsc(u"Ara")},.mon={tsc(u"Ocak"),tsc(u"Şubat"),tsc(u"Mart"),tsc(u"Nisan"),tsc(u"Mayıs"),tsc(u"Haziran"),tsc(u"Temmuz"),tsc(u"Ağustos"),tsc(u"Eylül"),tsc(u"Ekim"),tsc(u"Kasım"),tsc(u"Aralık")},.d_t_fmt=tsc(u"%a %d %b %Y %T"),.d_fmt=tsc(u"%d-%m-%Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u"%I:%M:%S %p"),.date_fmt=tsc(u"%a %d %b %Y %T %Z"),.am_pm={tsc(u"ÖÖ"),tsc(u"ÖS")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yYeE]"),.noexpr=tsc(u"^[-0nNhH]"),.yesstr=tsc(u"evet"),.nostr=tsc(u"hayır")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"90")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f"),.name_gen=tsc(u"Sayın"),.name_miss=tsc(u"Bayan"),.name_mr=tsc(u"Bay"),.name_mrs=tsc(u"Bayan"),.name_ms=tsc(u"Bayan")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Türkiye"),.country_post=tsc(u"TR"),.country_ab2=tsc(u"TR"),.country_ab3=tsc(u"TUR"),.country_num=792,.country_car=tsc(u"TR"),.country_isbn=tsc(u"975"),.lang_name=tsc(u"Türkçe"),.lang_ab=tsc(u"tr"),.lang_term=tsc(u"tur"),.lang_lib=tsc(u"tur")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"tr_TR"),.title=tsc(U"Turkish locale for Turkey"),.source=tsc(U"RAP\t\t;\t\tfast_io"),.address=tsc(U"Sankt Jørgens Alle 8, DK-1615 København V, Danmark\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Turkish"),.territory=tsc(U"Turkey"),.revision=tsc(U"1.0"),.date=tsc(U"2020-06-25")},.monetary={.int_curr_symbol=tsc(U"TRY "),.currency_symbol=tsc(U"₺"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"Paz"),tsc(U"Pzt"),tsc(U"Sal"),tsc(U"Çrş"),tsc(U"Prş"),tsc(U"Cum"),tsc(U"Cts")},.day={tsc(U"Pazar"),tsc(U"Pazartesi"),tsc(U"Salı"),tsc(U"Çarşamba"),tsc(U"Perşembe"),tsc(U"Cuma"),tsc(U"Cumartesi")},.abmon={tsc(U"Oca"),tsc(U"Şub"),tsc(U"Mar"),tsc(U"Nis"),tsc(U"May"),tsc(U"Haz"),tsc(U"Tem"),tsc(U"Ağu"),tsc(U"Eyl"),tsc(U"Eki"),tsc(U"Kas"),tsc(U"Ara")},.mon={tsc(U"Ocak"),tsc(U"Şubat"),tsc(U"Mart"),tsc(U"Nisan"),tsc(U"Mayıs"),tsc(U"Haziran"),tsc(U"Temmuz"),tsc(U"Ağustos"),tsc(U"Eylül"),tsc(U"Ekim"),tsc(U"Kasım"),tsc(U"Aralık")},.d_t_fmt=tsc(U"%a %d %b %Y %T"),.d_fmt=tsc(U"%d-%m-%Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U"%I:%M:%S %p"),.date_fmt=tsc(U"%a %d %b %Y %T %Z"),.am_pm={tsc(U"ÖÖ"),tsc(U"ÖS")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yYeE]"),.noexpr=tsc(U"^[-0nNhH]"),.yesstr=tsc(U"evet"),.nostr=tsc(U"hayır")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"90")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f"),.name_gen=tsc(U"Sayın"),.name_miss=tsc(U"Bayan"),.name_mr=tsc(U"Bay"),.name_mrs=tsc(U"Bayan"),.name_ms=tsc(U"Bayan")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Türkiye"),.country_post=tsc(U"TR"),.country_ab2=tsc(U"TR"),.country_ab3=tsc(U"TUR"),.country_num=792,.country_car=tsc(U"TR"),.country_isbn=tsc(U"975"),.lang_name=tsc(U"Türkçe"),.lang_ab=tsc(U"tr"),.lang_term=tsc(U"tur"),.lang_lib=tsc(U"tur")},.measurement={.measurement=1}};


}
}

#include"../main.h"