// FUN_00585c90  00585c90

void __thiscall FUN_00585c90(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 4) + 3) = 0;
    switch(*(undefined1 *)(*(int *)(param_1 + 4) + 1)) {
    case 7:
      *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 1;
      break;
    case 0xe:
      *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 5;
      break;
    case 0x1c:
      *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 10;
      break;
    case 0x46:
      *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 0x14;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 4) + 3) = 1;
    switch(*(undefined1 *)(*(int *)(param_1 + 4) + 1)) {
    case 1:
      *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 7;
      break;
    case 5:
      *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 0xe;
      break;
    case 10:
      *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 0x1c;
      break;
    case 0x14:
      *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 0x46;
    }
  }
  FUN_00585830();
  return;
}

