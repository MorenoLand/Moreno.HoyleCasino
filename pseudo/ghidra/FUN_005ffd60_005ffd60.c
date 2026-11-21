// FUN_005ffd60  005ffd60

void __thiscall FUN_005ffd60(int *param_1,int param_2)

{
  char cVar1;
  
  FUN_005f89f0(0);
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xd8))(0);
  }
  else {
    (**(code **)(*param_1 + 0xd8))(3);
    (**(code **)(*param_1 + 0xf0))();
    (**(code **)(*param_1 + 0xc0))();
  }
  FUN_005f4f50(param_2);
  *(undefined1 *)(param_2 + 4) = 1;
  return;
}

