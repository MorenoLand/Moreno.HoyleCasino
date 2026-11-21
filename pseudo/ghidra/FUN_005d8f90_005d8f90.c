// FUN_005d8f90  005d8f90

void __fastcall FUN_005d8f90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [52];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a91cb;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar5 = &local_50;
  FUN_005de600(puVar5,local_14);
  FUN_005d5a90(puVar5);
  iVar1 = FUN_005eafc0();
  iVar1 = (-(uint)(iVar1 != 0x30d414) & 0xffffffc7) + 0xe9;
  iVar2 = FUN_005eb220();
  iVar3 = FUN_005eb240();
  if (iVar2 == iVar3) {
    FUN_0064c8d0(local_50,local_4c,local_48,1,1,1);
    if (*(int *)(param_1 + 0x74) == 0) {
      pvVar4 = operator_new(0x1d0);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_74 = 0;
      }
      else {
        local_74 = FUN_005ec5a0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x74) = local_74;
    }
    FUN_006375b0();
    iVar2 = FUN_0063aac0();
    FUN_005ec8f0(iVar2 + 4,0x6c,0x76,0xe,iVar1,0x1c5,10000,0x24,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x74) + 0x74))();
    if (*(int *)(param_1 + 0x78) == 0) {
      pvVar4 = operator_new(0x1d0);
      local_8 = 1;
      if (pvVar4 == (void *)0x0) {
        local_78 = 0;
      }
      else {
        local_78 = FUN_005ec5a0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x78) = local_78;
    }
    FUN_005ec8f0(local_48,0x6c,0x76,0xe,iVar1,0x1d0,0x2711,0x24,0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x78) + 0x74))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

