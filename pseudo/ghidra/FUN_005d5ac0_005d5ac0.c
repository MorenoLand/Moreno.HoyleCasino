// FUN_005d5ac0  005d5ac0

void FUN_005d5ac0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_c [8];
  
  puVar2 = (undefined4 *)FUN_005d5a90(local_c);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return;
}

