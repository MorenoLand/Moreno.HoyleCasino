// FUN_00408910  00408910

undefined4 __thiscall FUN_00408910(undefined4 param_1,int param_2)

{
  if ((param_2 < 0) || (3 < param_2)) {
    FUN_005e9f20("0<=p && p<=3","..\\Casino\\baccaratstate.cpp",0x25e,param_1);
  }
  return *(undefined4 *)(&DAT_007071e8 + param_2 * 4);
}

