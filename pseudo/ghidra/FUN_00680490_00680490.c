// FUN_00680490  00680490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00680490(int *param_1,undefined4 param_2)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006add0f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(param_2) {
  case 0:
    (**(code **)(*(int *)param_1[0x5f] + 4))(1);
    if ((((param_1[0xa7] == 0x249f0b) || (param_1[0xa7] == 0x249f09)) ||
        ((param_1[0xa7] == 0x249f0f ||
         (((param_1[0xa7] == 0x249f0e || (param_1[0xa7] == 2400000)) || (param_1[0xa7] == 0x249f01))
         )))) || (((param_1[0xa7] == 0x249f04 || (param_1[0xa7] == 0x249f05)) ||
                  ((param_1[0xa7] == 0x249f07 || (param_1[0xa7] == 0x249f08)))))) {
      (**(code **)(*param_1 + 0x74))();
      pvVar2 = operator_new(0x20);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_34 = 0;
      }
      else {
        local_34 = FUN_006010a0(param_1[0x5f]);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_34);
    }
    if (param_1[0xa7] == 0x249f0d) {
      pvVar2 = operator_new(0x1c);
      local_8 = 1;
      if (pvVar2 == (void *)0x0) {
        local_38 = 0;
      }
      else {
        local_38 = FUN_00600a70(0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_38);
      (**(code **)(*(int *)param_1[0x5f] + 0x1c))(200);
    }
    if (param_1[0xa7] == 0x249f0a) {
      pvVar2 = operator_new(0x20);
      local_8 = 2;
      if (pvVar2 == (void *)0x0) {
        local_3c = 0;
      }
      else {
        local_3c = FUN_006010a0(param_1[0x5f]);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_3c);
    }
    (**(code **)(*DAT_0162ee84 + 0x80))(param_1[0xa8],0,0,5,1,0x3f800000,_DAT_006b3654,0);
    break;
  case 1:
    if ((((param_1[0xa7] == 2400000) || (param_1[0xa7] == 0x249f01)) || (param_1[0xa7] == 0x249f05))
       || (param_1[0xa7] == 0x249f62)) {
      (**(code **)(*(int *)param_1[0x5f] + 8))(3,0);
    }
    if ((param_1[0xa7] == 0x249f04) || (param_1[0xa7] == 0x249f07)) {
      (**(code **)(*(int *)param_1[0x5f] + 8))(3,0x3c);
    }
    if ((param_1[0xa7] == 0x249f0b) || (param_1[0xa7] == 0x249f09)) {
      (**(code **)(*(int *)param_1[0x5f] + 8))(2,0x1e);
    }
    if ((((param_1[0xa7] == 0x249f0d) || (param_1[0xa7] == 0x249f0c)) || (param_1[0xa7] == 0x249f0f)
        ) || ((param_1[0xa7] == 0x249f0e || (param_1[0xa7] == 0x249f08)))) {
      (**(code **)(*(int *)param_1[0x5f] + 8))(2,2);
    }
    if (param_1[0xa7] == 0x249f0a) {
      (**(code **)(*(int *)param_1[0x65] + 0x74))();
      (**(code **)(*(int *)param_1[0x5f] + 8))(2,200);
    }
    break;
  case 2:
    cVar1 = FUN_005eb610(DAT_00781870 ^ (uint)&stack0xfffffffc);
    if (cVar1 == '\x05') {
      (**(code **)(*(int *)param_1[0x5f] + 4))(3);
    }
    else {
      uVar3 = FUN_005eb610();
      FUN_005eb5d0((uVar3 & 0xff) - 0x32);
      if (param_1[0x65] != 0) {
        uVar4 = FUN_005eb610();
        FUN_005f0ae0(uVar4);
      }
      (**(code **)(*(int *)param_1[0x5f] + 4))(2);
    }
    (**(code **)(*(int *)param_1[0x5f] + 0x1c))(2);
    break;
  case 3:
    FUN_00650550(0);
  }
  ExceptionList = local_10;
  return;
}

