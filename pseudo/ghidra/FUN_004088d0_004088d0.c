// FUN_004088d0  004088d0

undefined4 __thiscall FUN_004088d0(undefined4 param_1,int param_2)

{
  if ((param_2 < 0) || (3 < param_2)) {
    FUN_005e9f20("0<=p && p<=3","..\\Casino\\baccaratstate.cpp",599,param_1);
  }
  return *(undefined4 *)(&DAT_007071d8 + param_2 * 4);
}

