// FUN_005f4210  005f4210

int __thiscall
FUN_005f4210(int *param_1,int param_2,undefined4 param_3,int *param_4,undefined1 param_5,int param_6
            ,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 *param_10)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if ((cVar1 == '\0') && (param_6 != 0xb)) {
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 0x1c))(0);
    }
    iVar2 = 0;
  }
  else {
    if (param_2 == 0x2033504d) {
      local_c = FUN_00608cf0(param_3,param_6,param_7,param_8,param_9,param_10);
    }
    else if (param_2 == 0x2047474f) {
      local_c = FUN_00608c30(param_3,param_6,param_7,param_8,param_9,param_10);
    }
    else {
      local_c = FUN_00608b50(param_3,param_6,param_5,param_7,param_8,param_9,param_10);
    }
    if ((DAT_00795fb1 != '\0') &&
       (FUN_0062fde0("Shell PlayASound(): soundIndex = %d, resourceID = %d, bCompressed = %d, priority = %d\n"
                     ,local_c,param_3,param_5,param_6), local_c == -1)) {
      FUN_0062fde0(">>> Sound not playing.");
    }
    if (local_c == -1) {
      if (param_4 != (int *)0x0) {
        (**(code **)(*param_4 + 0x1c))(0);
      }
      iVar2 = 0;
    }
    else {
      FUN_00608930(local_c,param_4);
      iVar2 = FUN_00608890(local_c);
      iVar2 = (iVar2 * 0x3c) / 1000;
      if (param_4 != (int *)0x0) {
        iVar3 = FUN_005f3e70();
        iVar4 = FUN_005f3e50();
        (**(code **)(*param_4 + 0x1c))((iVar3 - iVar4) + iVar2);
      }
    }
  }
  return iVar2;
}

