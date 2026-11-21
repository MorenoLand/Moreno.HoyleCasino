// GetMinSize  005d5f50

/* Library Function - Single Match
    public: virtual void __thiscall CPane::GetMinSize(class CSize &)const 
   
   Library: Visual Studio 2010 Debug */

void __thiscall CPane::GetMinSize(CPane *this,CSize *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x4c8);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x4c4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

