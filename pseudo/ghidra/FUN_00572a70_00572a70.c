// FUN_00572a70  00572a70

void __thiscall FUN_00572a70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_10 [8];
  undefined4 *local_8;
  
  uVar3 = 0xe;
  FUN_006375b0(0xe,param_1);
  local_8 = (undefined4 *)FUN_0063aae0(uVar3);
  iVar1 = FUN_005dcb00(param_2);
  puVar2 = (undefined4 *)
           FUN_0064c5c0(local_10,*(undefined4 *)(iVar1 + 0x4c4),*(undefined4 *)(iVar1 + 0x4c8));
  uVar3 = puVar2[1];
  *local_8 = *puVar2;
  local_8[1] = uVar3;
  FUN_005dcb00(param_2);
  FUN_0063b0a0();
  return;
}

