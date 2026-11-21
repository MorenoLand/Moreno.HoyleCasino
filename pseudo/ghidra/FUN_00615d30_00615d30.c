// FUN_00615d30  00615d30

void __thiscall FUN_00615d30(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  if (cVar1 != '\0') {
    cVar1 = FUN_00615160();
    if (cVar1 == '\0') {
      if (*(int *)(param_2 + 0xc) - param_1[0xc] < param_1[0x62]) {
        (**(code **)(*param_1 + 0x50))(param_1[0x62]);
      }
      else if (param_1[99] < *(int *)(param_2 + 0xc) - param_1[0xc]) {
        (**(code **)(*param_1 + 0x50))(param_1[99]);
      }
      else {
        (**(code **)(*param_1 + 0x50))(*(int *)(param_2 + 0xc) - param_1[0xc]);
      }
    }
    else if (*(int *)(param_2 + 8) - param_1[0xb] < param_1[0x62]) {
      (**(code **)(*param_1 + 0x48))(param_1[0x62]);
    }
    else if (param_1[99] < *(int *)(param_2 + 8) - param_1[0xb]) {
      (**(code **)(*param_1 + 0x48))(param_1[99]);
    }
    else {
      (**(code **)(*param_1 + 0x48))(*(int *)(param_2 + 8) - param_1[0xb]);
    }
    FUN_00615740();
    *(undefined1 *)(param_2 + 4) = 1;
  }
  return;
}

