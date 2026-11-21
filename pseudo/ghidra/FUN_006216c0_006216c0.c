// FUN_006216c0  006216c0

void FUN_006216c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_8;
  
  puVar1 = operator_new(0x2000);
  *puVar1 = 0;
  puVar1[1] = 0x3f;
  puVar1[2] = 0;
  puVar1[3] = 0x3f;
  puVar1[4] = 0;
  puVar1[5] = 0x1f;
  puVar3 = puVar1;
  FUN_006217b0(param_2,puVar1);
  iVar2 = FUN_00621ce0(param_2,puVar1,1,0x100);
  iVar4 = iVar2;
  for (local_8 = 0; local_8 < iVar2; local_8 = local_8 + 1) {
    FUN_00621f90(param_1,param_2,puVar1 + local_8 * 8,local_8,puVar3,iVar4);
  }
  return;
}

