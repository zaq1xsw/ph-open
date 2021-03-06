/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.ImageSwitcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class FrameLayout; } } }
namespace j2cpp { namespace android { namespace widget { class ViewSwitcher; } } }
namespace j2cpp { namespace android { namespace widget { class ViewAnimator; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { class ViewManager; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { class ViewParent; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/net/Uri.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/ViewManager.hpp>
#include <android/view/ViewParent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/FrameLayout.hpp>
#include <android/widget/ViewAnimator.hpp>
#include <android/widget/ViewSwitcher.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ImageSwitcher;
	class ImageSwitcher
		: public object<ImageSwitcher>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit ImageSwitcher(jobject jobj)
		: object<ImageSwitcher>(jobj)
		{
		}

		operator local_ref<android::widget::FrameLayout>() const;
		operator local_ref<android::widget::ViewSwitcher>() const;
		operator local_ref<android::widget::ViewAnimator>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::ViewGroup>() const;
		operator local_ref<android::view::ViewManager>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::view::ViewParent>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<java::lang::Object>() const;


		ImageSwitcher(local_ref< android::content::Context > const&);
		ImageSwitcher(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		void setImageResource(jint);
		void setImageURI(local_ref< android::net::Uri >  const&);
		void setImageDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
	}; //class ImageSwitcher

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_IMPL

namespace j2cpp {



android::widget::ImageSwitcher::operator local_ref<android::widget::FrameLayout>() const
{
	return local_ref<android::widget::FrameLayout>(get_jobject());
}

android::widget::ImageSwitcher::operator local_ref<android::widget::ViewSwitcher>() const
{
	return local_ref<android::widget::ViewSwitcher>(get_jobject());
}

android::widget::ImageSwitcher::operator local_ref<android::widget::ViewAnimator>() const
{
	return local_ref<android::widget::ViewAnimator>(get_jobject());
}

android::widget::ImageSwitcher::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::ImageSwitcher::operator local_ref<android::view::ViewGroup>() const
{
	return local_ref<android::view::ViewGroup>(get_jobject());
}

android::widget::ImageSwitcher::operator local_ref<android::view::ViewManager>() const
{
	return local_ref<android::view::ViewManager>(get_jobject());
}

android::widget::ImageSwitcher::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::ImageSwitcher::operator local_ref<android::view::ViewParent>() const
{
	return local_ref<android::view::ViewParent>(get_jobject());
}

android::widget::ImageSwitcher::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::ImageSwitcher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::ImageSwitcher::ImageSwitcher(local_ref< android::content::Context > const &a0)
: object<android::widget::ImageSwitcher>(
	call_new_object<
		android::widget::ImageSwitcher::J2CPP_CLASS_NAME,
		android::widget::ImageSwitcher::J2CPP_METHOD_NAME(0),
		android::widget::ImageSwitcher::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::ImageSwitcher::ImageSwitcher(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::ImageSwitcher>(
	call_new_object<
		android::widget::ImageSwitcher::J2CPP_CLASS_NAME,
		android::widget::ImageSwitcher::J2CPP_METHOD_NAME(1),
		android::widget::ImageSwitcher::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


void android::widget::ImageSwitcher::setImageResource(jint a0)
{
	return call_method<
		android::widget::ImageSwitcher::J2CPP_CLASS_NAME,
		android::widget::ImageSwitcher::J2CPP_METHOD_NAME(2),
		android::widget::ImageSwitcher::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::widget::ImageSwitcher::setImageURI(local_ref< android::net::Uri > const &a0)
{
	return call_method<
		android::widget::ImageSwitcher::J2CPP_CLASS_NAME,
		android::widget::ImageSwitcher::J2CPP_METHOD_NAME(3),
		android::widget::ImageSwitcher::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::widget::ImageSwitcher::setImageDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::widget::ImageSwitcher::J2CPP_CLASS_NAME,
		android::widget::ImageSwitcher::J2CPP_METHOD_NAME(4),
		android::widget::ImageSwitcher::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::ImageSwitcher,"android/widget/ImageSwitcher")
J2CPP_DEFINE_METHOD(android::widget::ImageSwitcher,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageSwitcher,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageSwitcher,2,"setImageResource","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ImageSwitcher,3,"setImageURI","(Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageSwitcher,4,"setImageDrawable","(Landroid/graphics/drawable/Drawable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
