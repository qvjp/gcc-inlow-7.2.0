
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_DefaultEditorKit$SelectionForwardAction__
#define __javax_swing_text_DefaultEditorKit$SelectionForwardAction__

#pragma interface

#include <javax/swing/text/TextAction$HorizontalMovementAction.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class Caret;
          class DefaultEditorKit$SelectionForwardAction;
      }
    }
  }
}

class javax::swing::text::DefaultEditorKit$SelectionForwardAction : public ::javax::swing::text::TextAction$HorizontalMovementAction
{

public: // actually package-private
  DefaultEditorKit$SelectionForwardAction();
public: // actually protected
  virtual void actionPerformedImpl(::javax::swing::text::Caret *, jint);
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_DefaultEditorKit$SelectionForwardAction__