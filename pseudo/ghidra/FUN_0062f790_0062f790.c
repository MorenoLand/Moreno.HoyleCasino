// FUN_0062f790  0062f790

undefined4 __thiscall FUN_0062f790(int *param_1,char *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if (*param_2 == '\0') {
    uVar1 = 0;
  }
  else {
    if (*(char *)((int)param_1 + 0x3e) == '\0') {
      FUN_005e9f20("false","..\\scilib\\platform\\StringManagerBase.cpp",0x1c9);
      (**(code **)(*param_1 + 0x48))();
    }
    pvVar2 = bsearch(param_2,(void *)param_1[5],param_1[3],8,FUN_0062f900);
    if (pvVar2 == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)((int)pvVar2 + 4);
    }
  }
  return uVar1;
}

