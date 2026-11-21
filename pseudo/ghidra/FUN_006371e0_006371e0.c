// FUN_006371e0  006371e0

undefined4 FUN_006371e0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  iVar2 = FUN_00666c70(param_1,param_2);
  iVar3 = FUN_006667c0(param_1,param_2);
  local_c = 0;
  while( true ) {
    if (iVar2 <= local_c) {
      return 0;
    }
    cVar1 = FUN_00666840(iVar3 + local_c);
    if (cVar1 != '\0') break;
    local_c = local_c + 1;
  }
  return 1;
}

