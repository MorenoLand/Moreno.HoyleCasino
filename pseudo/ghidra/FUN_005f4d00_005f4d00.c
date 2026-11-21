// FUN_005f4d00  005f4d00

void __thiscall FUN_005f4d00(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 4))(param_2);
  if (cVar1 != '\0') {
    switch(*(undefined4 *)(param_2 + 0x18)) {
    case 1:
      if ((*(uint *)(param_2 + 0x1c) & 8) != 0) {
        (**(code **)(*param_1 + 8))(param_2);
      }
      if ((*(uint *)(param_2 + 0x1c) & 0x10) != 0) {
        (**(code **)(*param_1 + 0xc))(param_2);
      }
      break;
    case 2:
      if ((*(uint *)(param_2 + 0x1c) & 8) != 0) {
        (**(code **)(*param_1 + 0x10))(param_2);
      }
      if ((*(uint *)(param_2 + 0x1c) & 0x10) != 0) {
        (**(code **)(*param_1 + 0x14))(param_2);
      }
      break;
    case 3:
      (**(code **)(*param_1 + 0x18))(param_2);
      break;
    case 4:
      (**(code **)(*param_1 + 0x1c))(param_2);
      break;
    default:
      (**(code **)(*param_1 + 0x24))(param_2);
      break;
    case 0x18:
      (**(code **)(*param_1 + 0x20))(param_2);
    }
  }
  return;
}

