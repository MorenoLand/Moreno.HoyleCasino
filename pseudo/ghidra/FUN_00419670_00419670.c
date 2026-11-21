// FUN_00419670  00419670

void __fastcall FUN_00419670(int param_1,int param_2,int param_3,undefined2 param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int extraout_ECX;
  undefined2 uVar3;
  ulonglong uVar4;
  int local_10;
  int local_8;
  
  if (param_5 == -1) {
    if (param_3 == -1) {
      param_5 = -1;
    }
    else {
      if (param_3 == 4) {
        local_10 = 0;
      }
      else {
        param_2 = (int)*(char *)(param_1 + 0x119 + param_3 * 0x118);
        local_10 = param_2;
      }
      param_5 = local_10;
    }
  }
  if (param_3 == 4) {
    for (local_8 = 0; uVar3 = (undefined2)((uint)param_2 >> 0x10), local_8 < 0xf;
        local_8 = local_8 + 1) {
      uVar4 = FUN_004193d0(4,0,local_8);
      param_2 = (int)(uVar4 >> 0x20);
      uVar3 = (undefined2)(uVar4 >> 0x30);
      if ((uVar4 & 0xffff) == 0) break;
    }
    FUN_00419370(4,0,local_8,CONCAT22(uVar3,param_4));
  }
  else {
    iVar2 = param_1;
    for (local_8 = 0; uVar3 = (undefined2)((uint)iVar2 >> 0x10), local_8 < 0x16;
        local_8 = local_8 + 1) {
      sVar1 = FUN_004193d0(param_3,param_5,local_8);
      uVar3 = (undefined2)((uint)extraout_ECX >> 0x10);
      if (sVar1 == 0) break;
      iVar2 = extraout_ECX;
    }
    FUN_00419370(param_3,param_5,local_8,CONCAT22(uVar3,param_4));
  }
  *(int *)(param_1 + 0x4c8) = *(int *)(param_1 + 0x4c8) + 1;
  return;
}

