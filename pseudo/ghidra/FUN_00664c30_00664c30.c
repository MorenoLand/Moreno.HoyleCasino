// FUN_00664c30  00664c30

void __thiscall FUN_00664c30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_006647c0(param_2);
    if (iVar1 <= local_8) break;
    iVar1 = FUN_00664830(param_2);
    (**(code **)(**(int **)(param_1 + 0x5c + (iVar1 + local_8) * 4) + 0x70))();
    local_8 = local_8 + 1;
  }
  return;
}

