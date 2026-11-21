// FUN_00608980  00608980

void __thiscall FUN_00608980(undefined4 param_1,int param_2)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    if (*(int *)(&DAT_00796b4c + local_8 * 0x24) == param_2) {
      FUN_0062fde0("Note: clearing script pointer in VSoundManager::ClearAllSoundsDWordForSafety()\n"
                   ,param_1);
      *(undefined4 *)(&DAT_00796b4c + local_8 * 0x24) = 0;
    }
  }
  return;
}

