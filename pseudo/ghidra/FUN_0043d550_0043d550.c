// FUN_0043d550  0043d550

void __thiscall
FUN_0043d550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_18 [4];
  int local_8;
  
  cVar1 = FUN_0043d350();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x188) = 1;
    local_18[3] = param_4;
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      local_18[local_8] = 0;
      if (local_8 == 0) {
        local_18[3] = param_4;
      }
      else if (local_8 == 1) {
        local_18[3] = param_5;
      }
      else if (local_8 == 2) {
        local_18[3] = param_6;
      }
      uVar2 = FUN_0043d9b0(local_18[3]);
      local_18[local_8] = uVar2;
    }
    FUN_0043f1b0(*(undefined4 *)(param_1 + 0x17c),param_2,local_18[0],local_18[1],local_18[2],
                 0xffffffff);
    (**(code **)(**(int **)(param_1 + 0x17c) + 8))(param_3,0);
  }
  return;
}

