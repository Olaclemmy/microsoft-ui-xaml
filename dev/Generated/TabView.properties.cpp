// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TabView.h"

CppWinRTActivatableClassWithDPFactory(TabView)

GlobalDependencyProperty TabViewProperties::s_CanCloseTabsProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_LeftCustomContentProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_LeftCustomContentTemplateProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_RightCustomContentProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_RightCustomContentTemplateProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_TabWidthModeProperty{ nullptr };

TabViewProperties::TabViewProperties()
    : m_tabClosingEventSource{static_cast<TabView*>(this)}
{
    EnsureProperties();
}

void TabViewProperties::EnsureProperties()
{
    if (!s_CanCloseTabsProperty)
    {
        s_CanCloseTabsProperty =
            InitializeDependencyProperty(
                L"CanCloseTabs",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnCanCloseTabsPropertyChanged));
    }
    if (!s_LeftCustomContentProperty)
    {
        s_LeftCustomContentProperty =
            InitializeDependencyProperty(
                L"LeftCustomContent",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnLeftCustomContentPropertyChanged));
    }
    if (!s_LeftCustomContentTemplateProperty)
    {
        s_LeftCustomContentTemplateProperty =
            InitializeDependencyProperty(
                L"LeftCustomContentTemplate",
                winrt::name_of<winrt::DataTemplate>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::DataTemplate>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnLeftCustomContentTemplatePropertyChanged));
    }
    if (!s_RightCustomContentProperty)
    {
        s_RightCustomContentProperty =
            InitializeDependencyProperty(
                L"RightCustomContent",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnRightCustomContentPropertyChanged));
    }
    if (!s_RightCustomContentTemplateProperty)
    {
        s_RightCustomContentTemplateProperty =
            InitializeDependencyProperty(
                L"RightCustomContentTemplate",
                winrt::name_of<winrt::DataTemplate>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::DataTemplate>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnRightCustomContentTemplatePropertyChanged));
    }
    if (!s_TabWidthModeProperty)
    {
        s_TabWidthModeProperty =
            InitializeDependencyProperty(
                L"TabWidthMode",
                winrt::name_of<winrt::TabViewWidthMode>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::TabViewWidthMode>::BoxValueIfNecessary(winrt::TabViewWidthMode::SizeToContent),
                winrt::PropertyChangedCallback(&OnTabWidthModePropertyChanged));
    }
}

void TabViewProperties::ClearProperties()
{
    s_CanCloseTabsProperty = nullptr;
    s_LeftCustomContentProperty = nullptr;
    s_LeftCustomContentTemplateProperty = nullptr;
    s_RightCustomContentProperty = nullptr;
    s_RightCustomContentTemplateProperty = nullptr;
    s_TabWidthModeProperty = nullptr;
}

void TabViewProperties::OnCanCloseTabsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TabView>();
    winrt::get_self<TabView>(owner)->OnPropertyChanged(args);
}

void TabViewProperties::OnLeftCustomContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TabView>();
    winrt::get_self<TabView>(owner)->OnPropertyChanged(args);
}

void TabViewProperties::OnLeftCustomContentTemplatePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TabView>();
    winrt::get_self<TabView>(owner)->OnPropertyChanged(args);
}

void TabViewProperties::OnRightCustomContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TabView>();
    winrt::get_self<TabView>(owner)->OnPropertyChanged(args);
}

void TabViewProperties::OnRightCustomContentTemplatePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TabView>();
    winrt::get_self<TabView>(owner)->OnPropertyChanged(args);
}

void TabViewProperties::OnTabWidthModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TabView>();
    winrt::get_self<TabView>(owner)->OnPropertyChanged(args);
}

void TabViewProperties::CanCloseTabs(bool value)
{
    static_cast<TabView*>(this)->SetValue(s_CanCloseTabsProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TabViewProperties::CanCloseTabs()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_CanCloseTabsProperty));
}

void TabViewProperties::LeftCustomContent(winrt::IInspectable const& value)
{
    static_cast<TabView*>(this)->SetValue(s_LeftCustomContentProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TabViewProperties::LeftCustomContent()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_LeftCustomContentProperty));
}

void TabViewProperties::LeftCustomContentTemplate(winrt::DataTemplate const& value)
{
    static_cast<TabView*>(this)->SetValue(s_LeftCustomContentTemplateProperty, ValueHelper<winrt::DataTemplate>::BoxValueIfNecessary(value));
}

winrt::DataTemplate TabViewProperties::LeftCustomContentTemplate()
{
    return ValueHelper<winrt::DataTemplate>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_LeftCustomContentTemplateProperty));
}

void TabViewProperties::RightCustomContent(winrt::IInspectable const& value)
{
    static_cast<TabView*>(this)->SetValue(s_RightCustomContentProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TabViewProperties::RightCustomContent()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_RightCustomContentProperty));
}

void TabViewProperties::RightCustomContentTemplate(winrt::DataTemplate const& value)
{
    static_cast<TabView*>(this)->SetValue(s_RightCustomContentTemplateProperty, ValueHelper<winrt::DataTemplate>::BoxValueIfNecessary(value));
}

winrt::DataTemplate TabViewProperties::RightCustomContentTemplate()
{
    return ValueHelper<winrt::DataTemplate>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_RightCustomContentTemplateProperty));
}

void TabViewProperties::TabWidthMode(winrt::TabViewWidthMode const& value)
{
    static_cast<TabView*>(this)->SetValue(s_TabWidthModeProperty, ValueHelper<winrt::TabViewWidthMode>::BoxValueIfNecessary(value));
}

winrt::TabViewWidthMode TabViewProperties::TabWidthMode()
{
    return ValueHelper<winrt::TabViewWidthMode>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_TabWidthModeProperty));
}

winrt::event_token TabViewProperties::TabClosing(winrt::TypedEventHandler<winrt::TabView, winrt::TabViewTabClosingEventArgs> const& value)
{
    return m_tabClosingEventSource.add(value);
}

void TabViewProperties::TabClosing(winrt::event_token const& token)
{
    m_tabClosingEventSource.remove(token);
}
