// FUN_005bcdf0  005bcdf0

undefined1 __thiscall FUN_005bcdf0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 local_9;
  
  local_9 = 1;
  cVar3 = FUN_005c15c0(param_2);
  if (cVar3 == '\0') {
    if (param_2 == 0x5e) {
      cVar3 = (**(code **)(*param_1 + 0x28))();
      if (((cVar3 != '\0') && (cVar3 = (**(code **)(*param_1 + 0x24))(), cVar3 == '\0')) &&
         (iVar1 = *(int *)(param_1[1] + 8), iVar2 = param_1[1], FUN_005c9140(),
         iVar1 <= *(int *)(iVar2 + 4))) {
        FUN_005c8fc0();
        FUN_005bceb0(1);
      }
    }
    else {
      local_9 = 0;
    }
  }
  else {
    local_9 = 1;
  }
  return local_9;
}

