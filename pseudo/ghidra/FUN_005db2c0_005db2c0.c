// FUN_005db2c0  005db2c0

void __fastcall FUN_005db2c0(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *local_38;
  undefined1 local_2c [8];
  void *local_24;
  int *local_20;
  char local_19;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9221;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff,DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (cVar1 != '\0') {
    piVar2 = (int *)(**(code **)(*DAT_0162ee84 + 0xe8))();
    cVar1 = (**(code **)(*piVar2 + 0x94))();
    if (cVar1 != '\0') {
      if (DAT_00793578 == (int *)0x0) {
        local_24 = operator_new(0x19e4);
        local_8 = 0;
        if (local_24 == (void *)0x0) {
          local_38 = (int *)0x0;
        }
        else {
          local_38 = (int *)FUN_0057a790();
        }
        local_20 = local_38;
        local_8 = 0xffffffff;
        DAT_00793578 = local_38;
        (**(code **)(*local_38 + 0x3c))();
        puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x2dc))(local_2c);
        local_18 = *puVar3;
        local_14 = puVar3[1];
        FUN_005f7320(local_18,local_14);
      }
      local_19 = FUN_005df700(0xffffffff);
      if (local_19 == '\0') {
        FUN_005f2ce0(0x139b);
        FUN_005f2ba0(0x1391);
        FUN_0057b720();
      }
      else {
        FUN_005f2cb0(0x139b);
        FUN_005f85d0();
        FUN_0057b1b0();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

