// FUN_005cd700  005cd700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005cd700(int *param_1,int param_2,int param_3,int *param_4,undefined4 param_5)

{
  char cVar1;
  
  if (((param_2 + param_3 == 0xcf1e) || (cVar1 = (**(code **)(*param_1 + 0xc0))(), cVar1 == '\0'))
     || (cVar1 = FUN_005cd830(param_2), cVar1 == '\0')) {
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 0x1c))(param_5);
    }
  }
  else {
    (**(code **)(*DAT_0162ee84 + 0x80))
              (param_2 + param_3,param_4,1,10,1,0x3f800000,_DAT_006b3654,param_1 + 0x65);
  }
  return;
}

