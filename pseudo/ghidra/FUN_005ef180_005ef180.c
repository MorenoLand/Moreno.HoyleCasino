// FUN_005ef180  005ef180

void __fastcall FUN_005ef180(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort local_20;
  ushort local_1e;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 1) {
      uVar2 = FUN_005f8550();
      *(undefined4 *)(param_1 + 0x68) = uVar2;
      uVar2 = FUN_005f8570();
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      FUN_005eedc0(*(undefined4 *)(param_1 + 0x5c),&local_8,&local_c);
      local_8 = local_8 + 2;
      FUN_005ecc60(local_8);
      if (*(ushort *)(*(int *)(param_1 + 0x98) + 0x2ca) <
          *(ushort *)(*(int *)(param_1 + 0x98) + 0x3ca)) {
        local_1e = *(ushort *)(*(int *)(param_1 + 0x98) + 0x3ca);
      }
      else {
        local_1e = *(ushort *)(*(int *)(param_1 + 0x98) + 0x2ca);
      }
      if (*(ushort *)(*(int *)(param_1 + 0x98) + 0x2ce) <
          *(ushort *)(*(int *)(param_1 + 0x98) + 0x3ce)) {
        local_20 = *(ushort *)(*(int *)(param_1 + 0x98) + 0x3ce);
      }
      else {
        local_20 = *(ushort *)(*(int *)(param_1 + 0x98) + 0x2ce);
      }
      iVar1 = FUN_00686cc0((uint)local_20 - (uint)local_1e);
      local_c = iVar1 + local_c;
      FUN_005eccb0(local_c);
    }
    else if ((1 < iVar1) && (iVar1 < 4)) {
      uVar2 = FUN_005eef60();
      FUN_005ecc60(uVar2);
      uVar2 = FUN_005eeef0();
      FUN_005eccb0(uVar2);
    }
  }
  return;
}

