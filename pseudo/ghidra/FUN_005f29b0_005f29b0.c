// FUN_005f29b0  005f29b0

void FUN_005f29b0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0();
    if (iVar1 <= local_8) break;
    uVar3 = extraout_var;
    piVar2 = (int *)FUN_0060ca40(local_8);
    (**(code **)(*piVar2 + 0x74))(piVar2,uVar3);
    local_8 = local_8 + 1;
  }
  return;
}

