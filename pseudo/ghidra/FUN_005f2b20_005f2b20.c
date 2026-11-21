// FUN_005f2b20  005f2b20

void __thiscall FUN_005f2b20(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_005f2a60(param_2,local_8);
    if (iVar1 == 0) break;
    piVar2 = (int *)FUN_005f2a60(param_2,local_8);
    if (param_3 == '\0') {
      (**(code **)(*piVar2 + 0xd0))(param_1);
    }
    else {
      (**(code **)(*piVar2 + 0xcc))();
    }
    local_8 = local_8 + 1;
  }
  return;
}

