// FUN_00608110  00608110

void __fastcall FUN_00608110(undefined4 *param_1)

{
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006aac8b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = VSoundManager::vftable;
  local_8 = 0;
  if (DAT_007960cb == '\0') {
    if (*(char *)((int)param_1 + 10) == '\0') {
      FUN_00608290();
      FUN_0060a4d0();
      local_8 = CONCAT31(local_8._1_3_,1);
      for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
        if (*(int *)(&DAT_00796b38 + local_18 * 0x24) != 0) {
          *(undefined4 *)(&DAT_00796b38 + local_18 * 0x24) = 0;
        }
        if (*(int *)(&DAT_00796b3c + local_18 * 0x24) != 0) {
          alSourcei(*(undefined4 *)(&DAT_00796b3c + local_18 * 0x24),0x1009,0);
          *(undefined4 *)(&DAT_00796b3c + local_18 * 0x24) = 0;
        }
      }
      alDeleteBuffers(0x12,&DAT_00796e88);
      alDeleteSources(0xf,&DAT_00796ce8);
      FUN_00608237();
      return;
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  local_8 = 0xffffffff;
  FUN_0062aef0();
  ExceptionList = local_10;
  return;
}

