// FUN_004fa880  004fa880

void __thiscall FUN_004fa880(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  if (((*(char *)(param_1 + 0x38) == '\0') && (0x186f8 < param_2)) && (param_2 < 0x18703)) {
    FUN_004fb640(param_2,param_3);
  }
  else {
    switch(param_2) {
    case 0x30e79e:
      if (((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(*(int *)(param_1 + 0x9c) + 0x1e0) != 0)) &&
         (cVar1 = FUN_006026d0(), cVar1 != '\0')) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1e0) + 0xc0))();
      }
      break;
    case 0x30e79f:
      if (((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(*(int *)(param_1 + 0x9c) + 0x1e4) != 0)) &&
         (cVar1 = FUN_006026d0(), cVar1 != '\0')) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1e4) + 0xc0))();
      }
      break;
    case 0x30e7a0:
      if (((*(int *)(param_1 + 0x9c) != 0) && (*(int *)(*(int *)(param_1 + 0x9c) + 0x1e8) != 0)) &&
         (cVar1 = FUN_006026d0(), cVar1 != '\0')) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x1e8) + 0xc0))();
      }
      break;
    case 0x30e7a2:
      FUN_004fc7d0();
      break;
    case 0x30e7a3:
      FUN_004803d0();
      break;
    case 0x30e7a4:
      FUN_0060cce0(0x2f7471);
    default:
      FUN_005dc7d0(param_2,param_3);
    }
  }
  return;
}

