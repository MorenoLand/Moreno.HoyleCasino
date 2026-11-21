// FUN_00536150  00536150

undefined4 __fastcall FUN_00536150(int param_1)

{
  int local_8;
  
  (**(code **)(*DAT_00793394 + 0x40))();
  local_8 = 0;
  while( true ) {
    if (4 < local_8) {
      return 0;
    }
    if (*(int *)(param_1 + 100 + local_8 * 4) != -1) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

