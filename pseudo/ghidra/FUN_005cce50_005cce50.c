// FUN_005cce50  005cce50

void __thiscall FUN_005cce50(int *param_1,int param_2)

{
  char cVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(char *)(param_2 + 4) == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xec))(param_2,&local_8,&local_c);
    if (cVar1 == '\0') {
      FUN_005cd330();
    }
    else {
      (**(code **)(*param_1 + 0xf0))(local_8,local_c);
      *(undefined1 *)(param_2 + 4) = 1;
    }
  }
  return;
}

