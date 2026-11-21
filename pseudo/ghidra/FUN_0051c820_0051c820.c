// FUN_0051c820  0051c820

undefined4 __thiscall FUN_0051c820(undefined4 param_1,int param_2)

{
  if ((param_2 < 0) || (4 < param_2)) {
    FUN_005e9f20("(0<=entryFeeIndex) && (entryFeeIndex<=4)","..\\Casino\\PokerTournDialog.cpp",0x2ae
                 ,param_1);
  }
  return *(undefined4 *)(&DAT_00721948 + param_2 * 4);
}

