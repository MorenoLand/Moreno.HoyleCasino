// FUN_0051e770  0051e770

undefined4 __thiscall FUN_0051e770(undefined4 param_1,int param_2)

{
  if ((param_2 < 0) || (4 < param_2)) {
    FUN_005e9f20("(0<=entryFeeIndex) && (entryFeeIndex<=4)","..\\Casino\\PokerTournDialog.cpp",0x4b4
                 ,param_1);
  }
  return *(undefined4 *)(&DAT_00721a10 + param_2 * 4);
}

