// FUN_00653320  00653320

void __thiscall FUN_00653320(CMFCPopupMenuBar *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  uint local_10;
  int local_8;
  
  local_10 = 0;
  CMFCPopupMenuBar::SetOffset(param_1,param_2);
  if (*(int *)(param_1 + 0x1dc) < 100) {
    iVar1 = FUN_00652c70(*(undefined4 *)(param_1 + 0x1dc));
    iVar2 = FUN_00652a10();
    iVar3 = FUN_00652c70(*(undefined4 *)(param_1 + 0x1dc));
    iVar4 = FUN_00652a10();
    local_14 = 0x5e;
    switch(param_2) {
    case 0:
      local_10 = (uint)(iVar1 == iVar2);
      if (iVar1 == iVar2) {
        local_14 = 0x5f;
      }
      if (iVar3 < iVar4) {
        local_10 = 3;
        local_14 = 0x61;
      }
      break;
    case 1:
      local_10 = 2;
      break;
    case 2:
      local_10 = 0;
      break;
    case 3:
      local_10 = 2;
      local_14 = 0x60;
    }
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      FUN_005f6410();
      FUN_005f6580(0,0,0);
      if (local_8 == 4) {
        FUN_005f6580(*(undefined1 *)(local_10 * 0x3c + 0x76d5b0),
                     *(undefined1 *)(local_10 * 0x3c + 0x76d5b4),
                     *(undefined1 *)(local_10 * 0x3c + 0x76d5b8));
      }
      else if (((*(int *)(&DAT_0076d580 + local_8 * 0xc + local_10 * 0x3c) != 0) ||
               (*(int *)(&DAT_0076d584 + local_8 * 0xc + local_10 * 0x3c) != 0)) ||
              (*(int *)(&DAT_0076d588 + local_8 * 0xc + local_10 * 0x3c) != 0)) {
        FUN_005f6490((&DAT_0076d580)[local_8 * 0xc + local_10 * 0x3c],
                     (&DAT_0076d584)[local_8 * 0xc + local_10 * 0x3c],
                     (&DAT_0076d588)[local_8 * 0xc + local_10 * 0x3c]);
      }
    }
    if (*(int *)(param_1 + 400) != 0) {
      FUN_005ecd00(local_14,0xffffffff,
                   CONCAT13((char)((uint)*(undefined4 *)(param_1 + 400) >> 0x18),
                            CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
    }
  }
  return;
}

