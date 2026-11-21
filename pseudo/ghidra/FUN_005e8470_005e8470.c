// FUN_005e8470  005e8470

void __thiscall FUN_005e8470(undefined4 param_1,int param_2)

{
  int local_c;
  undefined4 local_8;
  
  local_c = FUN_005f3bf0(param_1);
  if ((local_c < 0) || (3199999 < local_c)) {
    local_c = FUN_005f3bd0();
  }
  if ((local_c < 0) || (0x15 < local_c)) {
    FUN_005e9f20("(0<=gameRoom) && (gameRoom<NUM_GAMES_COUNTER)","..\\Casino\\hof.cpp",0x2b2);
  }
  local_8 = 0;
  if ((&DAT_00794990)[param_2 * 0xb8] == '\0') {
    local_c = -1;
    local_8 = 0xffffffff;
  }
  if ((local_c == 0xe) && (DAT_0079338c != 0)) {
    local_8 = *(undefined4 *)(DAT_007947e0 + 0x4f14);
  }
  *(int *)(&DAT_00794994 + param_2 * 0xb8) = local_c;
  *(undefined4 *)(&DAT_00794998 + param_2 * 0xb8) = local_8;
  return;
}

