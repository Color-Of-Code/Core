#ifndef UI_CHECKBOX_H
#define UI_CHECKBOX_H

#include "element.h"
#include "layout.h"
#include "label.h"

class UICheckbox : public UIElement {
protected:
    TextureResource* checktex;

    bool* value;
public:
    UICheckbox(bool* value);

    int getType() { return UI_CHECKBOX; };

    void click(const vec2& pos);

    void drawContent();
};


class UILabelCheckbox : public UILayout {

public:
    UILabelCheckbox(const std::string& label, bool* value);
};

class UILabelCheckboxSet : public UILayout {

public:
    UILabelCheckboxSet(const std::string& label, bool* value1, bool* value2, bool* value3);
};

#endif
