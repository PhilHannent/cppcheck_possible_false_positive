cppcheck_possible_false_positive
================================

cppcheck possible false positive

This project relates to ticket 5449 for cppcheck 1.63.1:

https://sourceforge.net/apps/trac/cppcheck/ticket/5449

This application produces the following warning in cppcheck:

C:\Git\cppcheck_false_postitive>"c:\Program Files (x86)\Cppcheck\cppcheck.exe" . --enable=all -f -j8
cppcheck: unusedFunction check can't be used with '-j' option. Disabling unusedF
unction check.
Checking main.cpp...
Checking mainwindow.cpp...
Checking my_base_class.cpp...
Checking my_class.cpp...
Checking my_parent_class.cpp...
1/5 files checked 20% done
[my_base_class.cpp:8] -> [my_base_class.h:22]: (warning) Call of pure virtual fu
nction 'slotResize' in constructor.
2/5 files checked 35% done
3/5 files checked 49% done
4/5 files checked 75% done
5/5 files checked 100% done
(information) Cppcheck cannot find all the include files (use --check-config for
 details)