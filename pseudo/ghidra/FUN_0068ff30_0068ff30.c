// FUN_0068ff30  0068ff30

char __thiscall
FUN_0068ff30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined4 local_18 [4];
  char local_5;
  
  if (param_1[6] == 0) {
    local_5 = '\0';
  }
  else {
    if (param_4 == (undefined4 *)0x0) {
      memset(local_18,0,0x10);
      param_4 = local_18;
    }
    cVar1 = (**(code **)(*param_1 + 0x20))(param_3,param_4,param_5);
    if (cVar1 == '\0') {
      local_5 = '\0';
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x24))(param_4,param_6);
      if (cVar1 == '\0') {
        local_5 = '\0';
      }
      else {
        local_5 = FUN_006901b0(param_2,param_3,param_4,param_6);
        if (local_5 != '\0') {
          (**(code **)(*param_1 + 0x28))(local_1c,local_20);
          uVar2 = FUN_00686cc0();
          *param_4 = uVar2;
          uVar2 = FUN_00686cc0();
          param_4[2] = uVar2;
          uVar2 = FUN_00686cc0();
          param_4[1] = uVar2;
          uVar2 = FUN_00686cc0();
          param_4[3] = uVar2;
        }
      }
    }
  }
  return local_5;
}

