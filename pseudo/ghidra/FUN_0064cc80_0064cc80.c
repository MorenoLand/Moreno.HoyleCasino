// FUN_0064cc80  0064cc80

void __fastcall FUN_0064cc80(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006abfd8;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = Room::vftable;
  local_8 = 0;
  FUN_005f38b0(0);
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x15])(1,uVar2);
  }
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
  }
  pvVar1 = (void *)param_1[0xf];
  if (pvVar1 != (void *)0x0) {
    FUN_00651950();
    operator_delete(pvVar1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)(DAT_0162ee84 + 100 + local_14 * 4) = 0xffffffff;
  }
  if (param_1[0x13] != 0) {
    if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x13])(1);
    }
    param_1[0x13] = 0;
  }
  if (param_1[0x14] != 0) {
    if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x14])(1);
    }
    param_1[0x14] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005f0d60();
  ExceptionList = local_10;
  return;
}

