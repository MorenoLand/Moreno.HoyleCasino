// FUN_00689a80  00689a80

void __fastcall FUN_00689a80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)**(undefined4 **)(param_1 + 8))(1);
  }
  if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
  }
  if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
  }
  FUN_00625100(uVar3,uVar2,uVar1);
  return;
}

