// FUN_004315e0  004315e0

void __thiscall FUN_004315e0(undefined4 param_1,int *param_2,int param_3)

{
  FUN_0062fde0("*** Stickman saying AnyCrapsWinner()\n",param_1);
  if ((param_2 != (int *)0x0) && (param_3 != -1)) {
    (**(code **)(*param_2 + 4))(param_3);
  }
  FUN_005cd800(0xd354,param_2,0);
  return;
}

