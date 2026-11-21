// FUN_005c15c0  005c15c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_005c15c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  int local_58;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_15;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a852e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_15 = 1;
  cVar3 = (**(code **)(*param_1 + 0x28))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (((cVar3 == '\0') && (param_1[4] != 0)) &&
     (cVar3 = (**(code **)(*(int *)param_1[4] + 0xc))(param_2), cVar3 != '\0')) {
    local_15 = 1;
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x28))();
    if (((cVar3 == '\0') && (param_1[5] != 0)) &&
       (cVar3 = (**(code **)(*(int *)param_1[5] + 8))(param_2), cVar3 != '\0')) {
      local_15 = 1;
    }
    else {
      switch(param_2) {
      case 0x54:
        (**(code **)(*DAT_0162ee84 + 0x80))(0x18a88,0,0,5,1,0x3f800000,_DAT_006b3654,0);
        FUN_005de170();
        (**(code **)(*param_1 + 0x10))();
        break;
      case 0x55:
        FUN_005dc2e0();
        break;
      default:
        local_15 = 0;
        break;
      case 0x5e:
        FUN_0062fde0(">>> Start spin\n");
        iVar1 = *(int *)(param_1[1] + 8);
        iVar2 = param_1[1];
        FUN_005c9140();
        if (*(int *)(iVar2 + 4) < iVar1) {
          iVar1 = *(int *)(param_1[1] + 8);
          iVar2 = param_1[1];
          FUN_005c9140();
          FUN_005d0db0(local_24,iVar1 - *(int *)(iVar2 + 4));
        }
        local_15 = 0;
        break;
      case 0x5f:
        cVar3 = (**(code **)(*param_1 + 0x28))();
        if ((cVar3 != '\0') && (cVar3 = (**(code **)(*param_1 + 0x24))(), cVar3 == '\0')) {
          for (local_1c = 1; local_1c <= *(int *)(*(int *)(param_1[1] + 0x10) + 8);
              local_1c = local_1c + 1) {
            FUN_005c8e20(local_1c,1);
          }
          FUN_005c8ed0(*(undefined4 *)(*(int *)(param_1[1] + 0x10) + 0xc));
          (**(code **)(*param_1 + 0x10))();
          (**(code **)(*param_1 + 0x14))();
          (**(code **)(*param_1 + 0xc))(0x5e);
        }
        break;
      case 0x60:
        cVar3 = (**(code **)(*param_1 + 0x28))();
        if ((cVar3 != '\0') && (cVar3 = (**(code **)(*param_1 + 0x24))(), cVar3 == '\0')) {
          FUN_005c8f00(1);
          (**(code **)(*param_1 + 0x10))();
          (**(code **)(*param_1 + 0x14))();
        }
        break;
      case 0x61:
        cVar3 = (**(code **)(*param_1 + 0x28))();
        if ((cVar3 != '\0') && (cVar3 = (**(code **)(*param_1 + 0x24))(), cVar3 == '\0')) {
          FUN_005c8dc0(1);
          (**(code **)(*param_1 + 0x14))();
        }
        break;
      case 0x62:
        cVar3 = (**(code **)(*param_1 + 0x24))();
        if (((cVar3 == '\0') && (cVar3 = (**(code **)(*param_1 + 0x28))(), cVar3 != '\0')) &&
           ((param_1[5] == 0 && (param_1[3] != 0)))) {
          pvVar4 = operator_new(0x28);
          local_8 = 0;
          if (pvVar4 == (void *)0x0) {
            local_58 = 0;
          }
          else {
            local_58 = FUN_005b9020();
          }
          local_8 = 0xffffffff;
          param_1[5] = local_58;
          FUN_005b9350(param_1[3]);
          FUN_005b94f0();
          FUN_005b94d0(FUN_005c0f20,param_1);
          (**(code **)(*param_1 + 0x18))();
        }
      }
      if ((((0x3158e2 < param_2) && (param_2 < 0x315901)) &&
          (cVar3 = (**(code **)(*param_1 + 0x28))(), cVar3 != '\0')) &&
         (cVar3 = (**(code **)(*param_1 + 0x24))(), cVar3 == '\0')) {
        local_14 = param_2 + -0x3158e2;
        FUN_005c8e20(local_14,1);
        FUN_005c8e20(local_14 + 1,0);
        (**(code **)(*param_1 + 0x14))();
        FUN_005c1b60();
        local_15 = 1;
      }
    }
  }
  ExceptionList = local_10;
  return local_15;
}

